// Last updated: 24/6/2025, 12:44:55 am
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
 private:
    void preorder(TreeNode* root,vector<int>&a){
        if(root==NULL)
        return;
        
        preorder(root->left,a);
        
        preorder(root->right,a);
        a.push_back(root->val);

    }
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        preorder(root,ans);
        return ans;

        
    }
};