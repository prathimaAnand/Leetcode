#include <queue>
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
        std::queue<TreeNode*> q;
        q.push(root);
        vector<vector<int>> result;

        if (!root) return result; 

        while (!q.empty()){
            std::vector<int> level;
            int q_size = q.size(); // number of nodes at this level
            // iterate through the level 
            for (int i = 0; i < q_size; i++){
                TreeNode* node = q.front();
                q.pop();
                if(node){ // eliminate null nodes
                    level.push_back(node->val);
                    q.push(node->left);
                    q.push(node->right);
                }
            }
            // from queue add to level list to result
            if(!level.empty()){
                result.push_back(level);
            }
        }
        return result;
    }
};
