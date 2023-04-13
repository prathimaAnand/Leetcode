
/* Preorder traversal - root node -> left node -> right node
Inorder traversal - start at root process left sub tree -> root - > right sub tree

problem is solve for finding binary tree from these 2 traversals

in the preorder we know what is the root and find that root in inorder and figure out left and right subtrees
*/
class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if (preorder.empty() || inorder.empty()) {
            return nullptr;
        }
        
        TreeNode* root = new TreeNode(preorder[0]);
        int mid = find(inorder.begin(), inorder.end(), preorder[0]) - inorder.begin();
        root->left = buildTree(vector<int>(preorder.begin()+1, preorder.begin()+mid+1), vector<int>(inorder.begin(), inorder.begin()+mid));
        root->right = buildTree(vector<int>(preorder.begin()+mid+1, preorder.end()), vector<int>(inorder.begin()+mid+1, inorder.end()));
        return root;
    }
};
