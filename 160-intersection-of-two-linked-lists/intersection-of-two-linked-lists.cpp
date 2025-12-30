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


        //otimal dono ko traverse kro ..jo khmtm ho jaye usko dusrehead pe dal do , chlo until they meet

        ListNode* temp1 = headA;
        ListNode* temp2 = headB;
         while(temp1!= temp2){
            temp1= temp1==NULL?headB:temp1->next;
            temp2 = temp2==NULL?headA:temp2->next;
         }
         return temp1;
    }
};