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

        ListNode dummy(0);

        ListNode* current = &dummy;
        ListNode* current_l1 = l1;
        ListNode* current_l2 = l2;

        int carry = 0;

        while (current_l1 != nullptr || current_l2 != nullptr || carry != 0) {

            int val1 = current_l1 != nullptr ? current_l1->val : 0;
            int val2 = current_l2 != nullptr ? current_l2->val : 0;

            int sum = (val1 + val2 + carry) % 10;

            current->next = new ListNode(sum);
            current = current->next;

            carry = (val1 + val2 + carry) / 10;

            if (current_l1 != nullptr) current_l1 = current_l1->next;
            if (current_l2 != nullptr) current_l2 = current_l2->next;
        }

        return dummy.next;
    }
};
