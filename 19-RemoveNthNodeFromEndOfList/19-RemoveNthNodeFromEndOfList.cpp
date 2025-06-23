// Last updated: 24/6/2025, 12:45:53 am
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* curr=head;
        ListNode* forw=curr->next;
        ListNode* prev=NULL;
        
        ListNode* temp=head;
        int size=0;
        while(temp!=NULL){
            size++;
            temp=temp->next;
        }
        if(n==size){
            return forw;
        }

        for(int i=1;i<size-n;i++){
            prev=curr;
            curr=curr->next;
            forw=forw->next;
            

        }


        
        if(forw==NULL){
            return NULL;
        }else if(forw->next==NULL){
            curr->next=NULL;
        }else
        curr->next=forw->next;

        return head;
        
    }
};