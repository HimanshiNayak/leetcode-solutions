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
  //node->next->val equal hone chahiye fir node->next mei node->nextka next add kr de
    void deleteNode(ListNode* node) {
      //we are given the node which we have to delete 
      //duplicate the next ka  value , then point this nodes next to its next ka next , and delte the given node ka next(as it was duplicated)
      node->val = node->next->val;
      ListNode* temp = node->next;
    node->next = node->next->next;
      delete temp;
    }
};