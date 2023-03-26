# link : https://leetcode.com/problems/maximum-depth-of-binary-tree/description/
'''
Time = O(n)
Memory ~ O(n) if tree is not a balanced tree
Three ways to solve
1. Recursive DFS
2. BFS
insert root in the queue and replace it with its children nad continue until tree is empty
Deque (Doubly Ended Queue) in Python is implemented using the module “collections“. 
Deque is preferred over a list in the cases where we need quicker append and pop oper0ations from both the ends of the container, as deque provides an O(1) time complexity for append and pop operations as compared to a list that provides O(n) time complexity.
BFS uses "deque"

3. Iterative DFS
DFS without recursion

 
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
  
# 2. BFS
class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        if not root:
            return 0
        
        level = 0
        q = deque([root])
        while q:
            for i in range(len(q)):
                node = q.popleft()
                if node.left:
                    q.append(node.left)
                if node.right:
                    q.append(node.right)
            level += 1
        return level
        
 # 3. Iterative DFS


