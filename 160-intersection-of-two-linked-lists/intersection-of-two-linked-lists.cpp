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

        unordered_set<ListNode*>s;
        ListNode* temp = headA;
        while(temp){
            s.insert(temp);
            temp= temp->next;
        }
        temp = headB;
        while(temp){
            if(s.find(temp)!=s.end())return temp;
            temp = temp->next;
        }
        return NULL;
    }
};