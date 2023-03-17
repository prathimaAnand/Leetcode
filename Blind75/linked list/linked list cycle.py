# link : https://leetcode.com/problems/linked-list-cycle/submissions/916583584/

'''
2 ways to solve
1. Hashset 
storing node as it is, it will be used as objects
memory & time = O(n)

2. 2 pointers
Memory = O(1)
Time = O(n)

slow and fast pointers
slow moves 1 step
fast moves 2 step
fast pointer will always meet slow pointer at the same time
'''

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        slow, fast = head, head
        
        while fast and fast.next: # because fast pointer is swifted by 2 positions
            slow = slow.next
            fast = fast.next.next
            if slow == fast: # if they meet then cycle exists
                return True
        return False # out of bounce so no cycle
