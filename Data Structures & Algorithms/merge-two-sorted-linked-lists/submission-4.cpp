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

        if (list1 == nullptr) return list2;
        if (list2 == nullptr) return list1;
        
        ListNode* next1 = list1;
        ListNode* next2 = list2;
        ListNode* current = nullptr;

        if (next1->val <= next2->val) {

            current = next1;
            next1 = next1->next;

        } else {

            current = next2;
            next2 = next2->next;
        
        }

        ListNode* head = current;

        while (next1 != nullptr && next2 != nullptr) {

            if (next1->val > next2->val) {

                current->next = next2;
                next2 = next2->next;
            
            } else {

                current->next = next1;
                next1 = next1->next;
            }

            current = current -> next;
        }

        if (next1 != nullptr) {

            current->next = next1;

        } else {

            current->next = next2;
        }

        return head;
    }
};
