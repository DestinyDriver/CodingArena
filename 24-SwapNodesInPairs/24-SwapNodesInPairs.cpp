// Last updated: 24/6/2025, 12:45:47 am
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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL||head->next==NULL)    return head;
        ListNode* ans=new ListNode(0);
        ListNode*prev=ans;

        while(head!=NULL&&head->next!=NULL){
            ListNode*forw1=head->next;
            ListNode*forw2=head->next->next;
            forw1->next=head;
            head->next=forw2;
            prev->next=forw1;
            prev=head;
            head=forw2;
        }

        return ans->next;


        
    }
};