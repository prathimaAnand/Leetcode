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
        queue<TreeNode*> q;
        q.push(root);  // adding root node
        vector<int> result;

        while (!q.empty()) {
            int q_size = q.size(); // number of nodes at this level
            TreeNode* right_side = nullptr;
            for (int i = 0; i < q_size; i++){ // go through every ele in current level
                TreeNode* node = q.front(); // overwrites first left value and front will have right value
                q.pop();
                if (node){
                    right_side = node;
                    q.push(node->left);
                    q.push(node->right);
                }
            }
            if (right_side) { // end of level right value will be pushed
                result.push_back(right_side->val);
            }
        }
        return result;
    }
};
