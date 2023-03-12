# link : https://leetcode.com/problems/reverse-linked-list/submissions/913469582/

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
    ListNode* reverseList(ListNode* head) {
        ListNode* previousP = nullptr;
        ListNode* currentP = head;

        while (currentP) {
            ListNode* temp = currentP->next;
            currentP->next = previousP;
            previousP = currentP;
            currentP = temp;
        }
        return previousP;
            
    }
};
