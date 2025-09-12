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
    bool isValidBST(TreeNode* root) {
        return valid_tree(root, LONG_MIN, LONG_MAX);
    }
    // helper function for recurssion
    bool valid_tree(TreeNode* node, long left, long right){
        if (!node) return true; // null tree is a BT
        if (!(node->val < right && node->val > left)) return false;

        return (valid_tree(node->left, left, node->val) && // going left - node < root and node > left range
                valid_tree(node->right, node->val, right)); // going right - node > root and node < right range
    }
};
