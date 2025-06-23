// Last updated: 24/6/2025, 12:45:12 am
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
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*>st;
        // st.push(root);
        vector<int>ans;
        // TreeNode*tp=root;


        while(root||!st.empty()){
            while(root){
                st.push(root);root=root->left;
            }
            ans.push_back(st.top()->val);
            root=st.top()->right;
            st.pop();
        }
        return ans;
        
    }
};