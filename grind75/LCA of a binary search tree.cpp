/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* cur_node = root;
        while(cur_node != nullptr) {
            if(p->val > cur_node->val && q->val > cur_node->val) {
                cur_node = cur_node->right;
            }
            else if(p->val < cur_node->val && q->val < cur_node->val) {
                cur_node = cur_node->left;
            }
            else { // its a split root node is LCA, same in right & left subtrees
                return cur_node;
            }
        }
        return cur_node;
    }
};