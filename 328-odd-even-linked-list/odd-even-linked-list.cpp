class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
    //using vector:as addtional space first to store all nodes then odd and even ones and then 
    //    ListNode* temp = head;
    //    vector<int>v,even,odd;
    //    while(temp){
    //     v.push_back(temp->val);
    //     temp = temp->next;
    //    }
    //    int n = v.size();
    //   for (int i = 0; i < n; i += 2) odd.push_back(v[i]);
    //   for (int i = 1; i < n; i += 2) even.push_back(v[i]);
    //   temp = head;
    //   int i=0,j=0;
    //   while(i<odd.size()){
    //       temp->val = odd[i];
    //       temp = temp->next;
    //       i++;
    //   }
    //   while(j<even.size()){
    //     temp->val = even[j];
    //     temp = temp->next;
    //     j++;
    //   }
    //   return head;
    // }

    //two pinters ..one to odd head and other to even head

    if(!head || !head->next)return head;
    ListNode* oddhead = head;
    ListNode* even = head->next;
    ListNode* evenhead = even;
    while(even && even->next){
        oddhead->next = even->next;
        oddhead = oddhead->next;
        even->next = oddhead->next;
        even = even->next;
    }
oddhead->next = evenhead;
return head;
    }
};