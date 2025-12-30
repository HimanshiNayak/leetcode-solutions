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


//length diff ka func
int lengdiff(ListNode *headA, ListNode *headB){
    int len1=0, len2=0;
    ListNode* temp= headA;
     while (headA != NULL || headB != NULL) {
        if (headA != NULL) {
            ++len1;
            headA = headA->next;
        }
        if (headB != NULL) {
            ++len2;
            headB = headB->next;
        }
    }
    return len1-len2;
}

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        //ek ko set mei bhr do fir dekh lo agr durse ka koi node prt hai ya ni  //insert listnode not val only

        // unordered_set<ListNode*>s;
        // ListNode* temp = headA;
        // while(temp){
        //     s.insert(temp);
        //     temp= temp->next;
        // }
        // temp = headB;
        // while(temp){
        //     if(s.find(temp)!=s.end())return temp;
        //     temp = temp->next;
        // }
        // return NULL;


        // //otimal dono ko traverse kro ..jo khmtm ho jaye usko dusrehead pe dal do , chlo until they meet

        // ListNode* temp1 = headA;
        // ListNode* temp2 = headB;
        //  while(temp1!= temp2){
        //     temp1= temp1==NULL?headB:temp1->next;
        //     temp2 = temp2==NULL?headA:temp2->next;
        //  }
        //  return temp1;

//space km krne ke liye diff nikal lo lenghth ka fir utne ke baad se chlao agr mil gye toh return nhi toh null

//if neg second wale ko move if pos firts ko move

int diff = lengdiff(headA, headB);

if(diff>0)
    while(diff-- != 0)headA= headA->next;
else 
    while(diff++ !=0)headB = headB->next;

while(headB!=NULL){
if(headA==headB)return headA;
headA=headA->next;
headB= headB->next;
}
return NULL;
    }
};