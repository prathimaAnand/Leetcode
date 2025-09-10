/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return dfs(root)[0];
    }
private:
    vector<int> dfs(TreeNode* root){
        if (!root) return {true, 0};

        vector<int> left = dfs(root->left);
        vector<int> right = dfs(root->right);

        bool balanced_root = (left[0] && right[0] && (abs(left[1] - right[1]) <= 1));
        int height = 1 + max(left[1], right[1]);

        return {balanced_root, height};

    }
};
