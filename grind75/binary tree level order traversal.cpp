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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;

        // BFS
        queue<TreeNode*> q;
        q.push(root);
        if (root == nullptr) return result;

        while (!q.empty()) {
            vector<int> level; // reset for every level
            int size = q.size(); // changes for every level

            // traverse through queue and add those nodes at that level
            for (int i = 0; i < size; i ++) {
                TreeNode* node = q.front();
                q.pop();
                if (node != nullptr) {
                    level.push_back(node->val);
                    q.push(node->left);
                    q.push(node->right);
                }
            }
            if (!level.empty()) result.push_back(level);
        }
        return result;
    }
};