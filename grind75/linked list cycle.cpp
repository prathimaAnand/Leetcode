/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        // slow and fast pointers
        // fast -> slow = cycle
        ListNode *s = head, *f = head;
        while(f != nullptr && f->next != nullptr) {
        // while(s != nullptr && f!= nullptr) { not checking f->next if its a null ptr then nullptr->next is invalid
        // Because you must ensure both f itself and its immediate next (f->next) are valid before trying to go two hops forward.
            s = s->next;
            f = f->next->next;
            if( f == s ) {
                return true;
            }
        }
        return false;
    }
};