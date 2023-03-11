# link : https://leetcode.com/problems/reverse-linked-list/submissions/913463419/

'''
1. Iteratively - Two pointers -->> Optimal solution
prevPointer = null
currentPointer = 1st element
if currentPointer = 0 its end of the list
and prevPointer will be the Head

M - O(1) 
T - O(n)

2. Recursive - 
takes more memory

refer video

'''

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        previousP, currentP = None, head

        while currentP:
            temp = currentP.next # to save currentP.next separately
            currentP.next = previousP # we are reversing the string
            previousP = currentP # then incrementing
            currentP = temp

        return previousP
             
