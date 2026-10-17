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
    bool hasCycle(ListNode* head) {
        
        if (head == nullptr) return false;

        ListNode* slow_pointer = head;
        ListNode* fast_pointer = head;

        while (fast_pointer -> next != nullptr && fast_pointer -> next -> next != nullptr) {

            slow_pointer = slow_pointer -> next;
            fast_pointer = fast_pointer -> next -> next;

            if (slow_pointer == fast_pointer) return true;
        }

        return false;
    }
};
