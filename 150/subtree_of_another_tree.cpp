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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (!root && subRoot) return false;
        if (!subRoot) return true; // subRoot is null then its a sub tree of root

        // check if same tree
        if ((isSameTree(root, subRoot))){
            return true;ac
        }
        
        // recurssive check for subnodes in root
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }

private:
        bool isSameTree(TreeNode* p, TreeNode* q){
            // base cases
            // if both are null
            if (!p && !q) return true;

            // if both are not null and root values are same then check for subnode values
            if (p && q && p->val == q->val){
            // recurssive
                return (isSameTree(p->left, q->left) and isSameTree(p->right, q->right));
            }
            // if either is empty
            return false;
    }
};
