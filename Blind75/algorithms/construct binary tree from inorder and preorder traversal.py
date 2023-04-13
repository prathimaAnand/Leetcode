//
/* Preorder traversal - root node -> left node -> right node
Inorder traversal - start at root process left sub tree -> root - > right sub tree

problem is solve for finding binary tree from these 2 traversals

in the preorder we know what is the root and find that root in inorder and figure out left and right subtrees
*/

//


# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def buildTree(self, preorder: List[int], inorder: List[int]) -> Optional[TreeNode]:
        if not preorder or not inorder:
            return None
        
        root = TreeNode(preorder[0])
        mid = inorder.index(preorder[0])
        root.left = self.buildTree(preorder[1:mid + 1], inorder[:mid])
        root.right = self.buildTree(preorder[mid + 1:], inorder[mid+1:])
        return root
