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
    ListNode* detectCycle(ListNode* head) {

        // Step 1: Find if cycle exists
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {

            slow = slow->next;          // 1 step
            fast = fast->next->next;    // 2 steps

            if (slow == fast) {
                break;                  // Cycle found
            }
        }

        // No cycle
        if (fast == NULL || fast->next == NULL) {
            return NULL;
        }

        // Step 2: Find starting point of cycle
        slow = head;

        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }

        // slow/fast is the starting node of cycle
        return slow;
    }
};
