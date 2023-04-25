"""edge cases:
2 helper functions - sameTree and isSubTree
If both trees are null - same tree & is a sub tree
Extra node for one of the sub trees - not same tree
Is null tree a sub tree of other tree - yes
"""

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSubtree(self, root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:
        if not subRoot:return True
        if not root:return False

        if self.sameTree(root, subRoot):
            return True
        
        return (self.isSubtree(root.left,subRoot)) or self.isSubtree(root.right,subRoot)

    def sameTree(self, root,subRoot):
        if not root and not subRoot:
            return True
        if root and subRoot and root.val == subRoot.val:
            return (self.sameTree(root.left, subRoot.left) and self.sameTree(root.right, subRoot.right))
