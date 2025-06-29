// Last updated: 24/6/2025, 12:46:04 am
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l=new ListNode(0);
        ListNode*ans=l;

        int carry=0;

        while(l1!=NULL&&l2!=NULL){
            int sum=(l1->val+l2->val+carry)%10;
            carry=(l1->val+l2->val+carry)/10;
            ListNode* k=new ListNode(sum);
            l->next=k;
            l=l->next;
            l1=l1->next;l2=l2->next;
        }

        while(l1!=NULL){
            int sum=(l1->val+carry)%10;
            carry=(l1->val+carry)/10;
            ListNode* k=new ListNode(sum);
            l->next=k;
            l=l->next;l1=l1->next;

        }

        while(l2!=NULL){
            int sum=(l2->val+carry)%10;
            carry=(l2->val+carry)/10;
            ListNode* k=new ListNode(sum);
            l->next=k;
            l=l->next;l2=l2->next;

        }
        if(carry!=0) l->next=new ListNode(carry);
        return   ans->next;

        
    }
};