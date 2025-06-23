// Last updated: 24/6/2025, 12:44:27 am
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
    void tra(TreeNode*root,int&k,bool mk){
        if(root==NULL)  return;
        if(mk){
            if(root->left==NULL&&root->right==NULL) k+=root->val;
        }

        tra(root->left,k,true);
        tra(root->right,k,false);
    }
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int k=0;
        tra(root,k,false);
        return k;

        
    }
};