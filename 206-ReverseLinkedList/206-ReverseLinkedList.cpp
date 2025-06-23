// Last updated: 24/6/2025, 12:44:44 am
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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL){
            return NULL;
        }

        ListNode* curr=head;
        ListNode* forw=curr->next;
        ListNode*prev=NULL;

        while(curr!=NULL){
            curr->next=prev;
            prev=curr;
            curr=forw;
            if(forw!=NULL)
            forw=forw->next;
        }
        return prev;
        
    }
};