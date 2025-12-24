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
    void deleteNode(ListNode* node) {
        //jo del krna hai whi hai toh iske bgl wale ko del krdo ..iski value fix krdo pointer update kr do

        node->val = node->next->val;
        node->next = node->next->next;

    }
};