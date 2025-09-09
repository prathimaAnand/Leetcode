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
        // check if root is null
        if (!root) return nullptr;

        // swap root node
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;

        // or use swap(root->left, root->right);

        // swap sub nodes recursively
        invertTree(root->left);
        invertTree(root->right);

        // return the tree with root
        return root;
    }
};
