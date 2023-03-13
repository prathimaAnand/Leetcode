#link : https://leetcode.com/problems/merge-two-sorted-lists/
#yet to solve 1 test case

'''
Concept:
Going through both the list at the same time
and inserting the gratest among 2
if the list is longer than the other ->> insert the rest of the list
because lists are sorted
'''


# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        dummyList = ListNode()
        tailNode = dummyList

        while list1 and list2:
            if list1.val < list2.val:
                tailNode.next = list1
                list1 = list1.next
            else:
                tailNode.next = list2
                list2 = list2.next

            tailNode = tailNode.next 

            if list1:
                tailNode.next = list1
            elif list2:
                tailNode.next = list2
        
        return dummyList.next

    
    
'''
#neetcode solution


# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: ListNode, list2: ListNode) -> ListNode:
        dummy = ListNode()
        tail = dummy

        while list1 and list2:
            if list1.val < list2.val:
                tail.next = list1
                list1 = list1.next
            else:
                tail.next = list2
                list2 = list2.next
            tail = tail.next

        if list1:
            tail.next = list1
        elif list2:
            tail.next = list2

        return dummy.next


'''
