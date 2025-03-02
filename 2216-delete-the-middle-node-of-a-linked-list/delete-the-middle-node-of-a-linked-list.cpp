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
//tortoise and hare but with fast as fast->next->next from start , slow head pe hi , so thaut we stopone beforemid
    ListNode* deleteMiddle(ListNode* head) {
//         if(!head || !head->next)return nullptr;
//         ListNode* slow = head;
//         ListNode* fast = head;
//         fast = fast->next->next;
//         while(fast!=NULL && fast->next !=NULL){
//             slow = slow->next;
//             fast= fast->next->next;
//         }
//         slow->next= slow->next->next;
//         return head;
//     }
// };

if (!head || !head->next) return NULL;
  ListNode* temp = head;
  int count=0,n=0;
  while(temp){
      count++;
      temp= temp->next;
  }
 
  n = count/2;
  temp = head;
  for(int i=0;i<n-1;i++){temp = temp->next;}
  
  ListNode* mid = temp->next;
  temp->next= temp->next->next;
  delete mid;
  return head;
}
};