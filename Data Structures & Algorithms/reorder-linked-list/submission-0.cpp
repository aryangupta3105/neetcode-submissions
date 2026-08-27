class Solution {
public:
    void reorderList(ListNode* head) {
        if (!head || !head->next) return;

        // 1. Find the middle
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // 2. Split into two halves
        ListNode* second = slow->next;
        slow->next = nullptr;

        // 3. Reverse the second half
        ListNode* prev = nullptr;
        ListNode* next = nullptr;

        while (second) {
            next = second->next;
            second->next = prev;
            prev = second;
            second = next;
        }

        // 4. Merge the two halves
        ListNode* first = head;
        second = prev;

        while (second) {
            ListNode* next1 = first->next;
            ListNode* next2 = second->next;

            first->next = second;
            second->next = next1;

            first = next1;
            second = next2;
        }
    }
};