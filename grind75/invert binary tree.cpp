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
    TreeNode* invertTree(TreeNode* root) {
        if (!root) return nullptr;
        
        swap_nodes(root->left, root->right);
        invertTree(root->left);
        invertTree(root->right);
        return root;
        
    }
    void swap_nodes(TreeNode*& node1, TreeNode*& node2) {
        TreeNode* temp = node1;
        node1 = node2;
        node2 = temp;  
    }
};