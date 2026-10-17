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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if (head == nullptr) return nullptr;

        ListNode dummy = ListNode(0, head);

        ListNode* slow_pointer = &dummy;
        ListNode* fast_pointer = slow_pointer;

        for (int i = 0; i < n; i++) fast_pointer = fast_pointer->next;

        while (fast_pointer->next != nullptr) {

            fast_pointer = fast_pointer->next;
            slow_pointer = slow_pointer->next;
        }

        slow_pointer->next = slow_pointer->next->next;

        return dummy.next;
    }
};
