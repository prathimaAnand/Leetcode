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
 // 1. Length-based (two-pass) solution
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int length = 0;
        ListNode* node = head;

        // getting length of linked list
        while(head != nullptr) {
            length += 1;
            head = head->next;
        }
        
        int m = length/2;
        // iterating until mid and return that node
        for (int i = 0; i < m; i ++) {
            node = node->next;
        }
        return node;
    }
};
/*
Time Complexity

First loop: traverses entire list → O(n)

Second loop: traverses half the list → O(n/2) = O(n)

Total = O(n + n/2) = O(n)

Space Complexity

Only a few pointers and integers used (head, node, length, m)

No extra data structures → O(1)
*/

// 2. Fast & slow pointer (one-pass) solution
// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         ListNode* s = head;
//         ListNode* f = head;

//         while (f && f->next != nullptr) {
//             s = s->next;
//             f = f->next->next;
//         }
//         return s;
//     }
// };

/*
Time Complexity

Single traversal, fast moves twice as fast as slow.

When fast reaches end, slow has moved ~ n/2 steps.

Still O(n), but in 1 pass.

So best possible = O(n)
Space Complexity

Only two pointers (s and f)

No extra space → O(1)
*/
