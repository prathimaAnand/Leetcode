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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // base cases
        // if both are null nodes
        if (!p && !q){
            return true;
        }
        // if either is null or root values are not equal
        if (!p || !q || p->val != q->val){
            return false;
        }
        return (isSameTree(p->left, q->left) && isSameTree(p->right, q->right));
    }
};
