/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };**/

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* curr = head;
        int count = 0;

        // Count the number of nodes in the linked list
        while (curr != nullptr) {
            curr = curr->next;
            count += 1;
        }

        // Reset the pointer to the head and move to the middle node
        curr = head;
        for (int i = 0; i < count / 2; ++i) {
            curr = curr->next;
        }

        return curr;
    }
};
