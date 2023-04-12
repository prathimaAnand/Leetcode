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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        ListNode* cur = dummy;
        int carry = 0, v1, v2;
        
        while(l1 || l2 || carry){
            if(v1)
                v1 = l1->val;
            else
                NULL;
            
            if(v2)
                v2 = l2->val;
            else
                NULL;
            
            int val = v1 + v2 + carry;
            carry = val / 10;
            val = val % 10;
            cur->next = new ListNode(val);

            //update pointers 
            cur = cur->next;
            if(l1)
                l1 = l1->next;
            else
                NULL;
            if(l2)
                l2 = l2->next;
            else
                NULL;
        }
        return dummy->next;
    }
};
