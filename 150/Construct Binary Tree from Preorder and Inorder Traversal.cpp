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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if( preorder.empty() || inorder.empty() ) {
            return nullptr;
        }
        int root_val = preorder[0];
        TreeNode* root = new TreeNode(root_val);

        // find root index in inorder
        auto i = find(inorder.begin(), inorder.end(), root_val);
        int m = i - inorder.begin();

        vector<int> leftPre(preorder.begin() + 1, preorder.begin() + 1 + m);
        vector<int> leftIn(inorder.begin(), inorder.begin() + m);
        root->left = buildTree(leftPre, leftIn);

        vector<int> rightPre(preorder.begin() + 1 + m, preorder.end());
        vector<int> rightIn(inorder.begin() + m + 1, inorder.end());
        root->right = buildTree(rightPre, rightIn);

        return root;

    }
};
