class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
       ListNode* temp = head;
       vector<int>v,even,odd;
       while(temp){
        v.push_back(temp->val);
        temp = temp->next;
       }
       int n = v.size();
      for (int i = 0; i < n; i += 2) odd.push_back(v[i]);
      for (int i = 1; i < n; i += 2) even.push_back(v[i]);
      temp = head;
      int i=0,j=0;
      while(i<odd.size()){
          temp->val = odd[i];
          temp = temp->next;
          i++;
      }
      while(j<even.size()){
        temp->val = even[j];
        temp = temp->next;
        j++;
      }
      return head;
    }
};