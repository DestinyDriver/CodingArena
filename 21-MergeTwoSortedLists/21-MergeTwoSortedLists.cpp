// Last updated: 24/6/2025, 12:45:50 am
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL&&list2==NULL)
            return NULL;

        ListNode* temp1=list1;
        ListNode* temp2=list2;
        ListNode* an=new ListNode(1);
        ListNode* ans=an;

        while(temp1!=NULL && temp2!=NULL){
            if(temp1->val>=temp2->val){
                ans->next=temp2;
                temp2=temp2->next;
                
            }
            else if(temp1->val<temp2->val){
                ans->next=temp1;
                temp1=temp1->next;
                
            }
            ans=ans->next;

        }
        if(temp1==NULL&&temp2!=NULL)
            ans->next=temp2;
        if(temp1!=NULL&&temp2==NULL)
            ans->next=temp1;

          
            return an->next;
        
    }
};