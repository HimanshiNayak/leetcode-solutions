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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head; 

        ListNode* cur = head;
        ListNode* pre = NULL;
        int len = 0;

        while (cur) {
            len++;
            cur = cur->next;
        }

        k = k % len; 
        if (k == 0) return head;

        while (k--) {
            cur = head;
            pre = NULL;
            
            while (cur->next) {
                pre = cur;
                cur = cur->next;
            }
            
            cur->next = head;
            head = cur;
            if (pre) pre->next = NULL;
        }
        return head;
    }
};
