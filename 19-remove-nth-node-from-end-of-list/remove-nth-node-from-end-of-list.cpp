class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0); // Dummy node to handle edge cases //for the cases when we need to del head
        dummy->next = head;
        ListNode* fast = dummy;
        ListNode* slow = dummy;

        // Move fast pointer 'n' steps ahead
        for (int i = 0; i < n; i++) {
            fast = fast->next;
        }

        // Move both fast and slow until fast reaches the end
        while (fast->next != NULL) {
            fast = fast->next;
            slow = slow->next;
        }

        // Remove the nth node
        slow->next = slow->next->next;

        return dummy->next; // Return the new head//bcz of the case when the head is to be deleted
    }
};
