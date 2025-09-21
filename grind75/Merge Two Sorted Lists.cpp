/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // dummy node
        ListNode dummy(0);
        ListNode* node = &dummy; // node always points to the last node of the merged list we’re building.

        while (list1 && list2) {
            if (list1->val < list2->val) {
                node->next = list1;
                list1 = list1->next;
            }
            else {
                node->next = list2;
                list2 = list2->next;
            }
            // we must move node forward, so that next time we can attach the next node to the new end.
            node = node->next;
        }
        if (list1) {
            node->next = list1;
        }
        else {
            node->next = list2;
        }
    return dummy.next;
    }
};