// Last updated: 24/6/2025, 12:44:58 am
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
    bool hasCycle(ListNode *head) {

        ListNode* slow=head;
        ListNode* fast=head;

        while(slow!=NULL&&fast!=NULL){
           
            if(fast!=NULL){
            fast=fast->next;
            if(fast!=NULL)
            fast=fast->next;}
            

            slow=slow->next;

            if(fast==slow&&slow!=NULL)
            return true;
        }
        return false;


 
        
    }
};