// Last updated: 24/6/2025, 12:44:37 am
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
    bool isPalindrome(ListNode* head) {
        int size=0;

        ListNode* temp=head;

        while(temp!=NULL){
            temp=temp->next;
            size++;
        }
        if(size==1)
        return true;

        int divider=size/2;
        stack<int>s;
        temp=head;


        //pusher
        for(int i=0;i<divider;i++){
            s.push(temp->val);
            temp=temp->next;

        }
        //checker

        if(size%2==1)
            temp=temp->next;

        while(temp!=NULL){
            if(temp->val==s.top()){
                s.pop();
                temp=temp->next;}
            else{
                return false;
            }
        }
        return true;


        
    }
};