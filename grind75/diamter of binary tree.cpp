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
    int diameterOfBinaryTree(TreeNode* root) {
        int result = 0;
        dfs(root, result);
        return result;
    }
    int dfs(TreeNode* node, int& result) {
        // base case
        if (node == nullptr) return 0;
        
        int left = dfs(node->left, result);
        int right = dfs(node->right, result);

        // diameter
        result = max(result, left + right);

        // height
        return (1 + max(left, right));
    }
};