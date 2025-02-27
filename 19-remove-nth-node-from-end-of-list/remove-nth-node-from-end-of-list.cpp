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
        ListNode* temp = new ListNode(0);
        temp->next= head;
        ListNode* fast = temp;
        ListNode* slow = temp;
        int curr=0;
        for(int i=0;i<=n;i++){
            fast = fast->next;
        }
        while(fast!= NULL){
            fast = fast->next;
            slow=slow->next;
        }
        slow->next = slow->next->next;
        return temp->next;
    }
};


// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         ListNode* dummy = new ListNode(0); // Dummy node to handle edge cases
//         dummy->next = head;
//         ListNode* fast = dummy;
//         ListNode* slow = dummy;

//         // Move fast pointer 'n' steps ahead
//         for (int i = 0; i <= n; i++) {
//             fast = fast->next;
//         }

//         // Move both fast and slow until fast reaches the end
//         while (fast != NULL) {
//             fast = fast->next;
//             slow = slow->next;
//         }

//         // Remove the nth node
//         slow->next = slow->next->next;

//         return dummy->next; // Return the new head
//     }
// };
