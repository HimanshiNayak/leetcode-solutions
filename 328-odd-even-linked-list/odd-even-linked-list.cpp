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
    ListNode* oddEvenList(ListNode* head) {
 
        if (!head) return head;

        vector<int> vals;
        ListNode* temp = head;

        // Store all values
        while (temp) {
            vals.push_back(temp->val);
            temp = temp->next;
        }

        temp = head;

        // Place odd-indexed values (0, 2, 4...)
        for (int i = 0; i < vals.size(); i += 2) {
            temp->val = vals[i];
            temp = temp->next;
        }

        // Place even-indexed values (1, 3, 5...)
        for (int i = 1; i < vals.size(); i += 2) {
            temp->val = vals[i];
            temp = temp->next;
        }

        return head;
    }
};
