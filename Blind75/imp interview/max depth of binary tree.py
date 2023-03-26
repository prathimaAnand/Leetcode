# link : https://leetcode.com/problems/maximum-depth-of-binary-tree/description/
'''
Time = O(n)
Memory ~ O(n) if tree is not a balanced tree
Three ways to solve
 
'''
# 1. RECURSIVE DFS

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        if not root:
            return 0
        
        left_node = self.maxDepth(root.left)
        right_node = self.maxDepth(root.right)
        max_val = 1 + max(left_node, right_node)
        return max_val


