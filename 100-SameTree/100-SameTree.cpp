// Last updated: 24/6/2025, 12:45:11 am
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {

    bool tra(TreeNode* p,TreeNode* q){
        if(p==NULL&&q==NULL)    return true;
        else if(p==NULL&&q!=NULL)   return false;
        else if(p!=NULL&&q==NULL)   return false;

        if(p->val!=q->val)      return false;

        return tra(p->left,q->left)&&tra(p->right,q->right);
    }
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return tra(p,q);
        
    }
};