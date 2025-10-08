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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            TreeNode* right_side = nullptr;
            int q_size = q.size();

            for (int i = 0; i < q_size; i ++) {
                TreeNode* node = q.front();
                q.pop();
                if (node != nullptr) {
                    right_side = node;
                    q.push(node->left);
                    q.push(node->right);
                }
            }
            if (right_side != nullptr) result.push_back(right_side->val);
        }
        return result;
    }
};