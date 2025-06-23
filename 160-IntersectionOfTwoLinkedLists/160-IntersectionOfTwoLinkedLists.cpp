// Last updated: 24/6/2025, 12:44:54 am
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
        map<ListNode*,bool>checker;
        ListNode* temp1=headA;
        ListNode* temp2=headB;
        checker.emplace(temp1,true);

        //pusher
        while(temp1!=NULL){
                
                temp1=temp1->next;
                checker.emplace(temp1,true);
        }
        //checker
        while(temp2!=NULL){
            if(checker.count(temp2)>0){
                    return temp2;
            }
            temp2=temp2->next;
        }




        return NULL;
        
    }
};