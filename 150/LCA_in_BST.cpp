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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* cur_node = root;

        while (cur_node){
            // check if p and q are greater than root
            if (p->val > cur_node->val && q->val > cur_node->val ){
                cur_node = cur_node->right;
            }
            else if (p->val < cur_node->val && q->val < cur_node->val ){
                cur_node = cur_node->left;
            }
            else{
                return cur_node;a
            }
        }
        return nullptr;
    }
};
