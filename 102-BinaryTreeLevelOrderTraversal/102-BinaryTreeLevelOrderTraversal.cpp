// Last updated: 24/6/2025, 12:45:08 am
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL)  return {};

        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            int lv=q.size();
            vector<int>temp;

            for(int i=0;i<lv;i++){
                TreeNode* fr=q.front();
                temp.push_back(fr->val);
                q.pop();
                if(fr->left)    q.push(fr->left);
                if(fr->right)   q.push(fr->right);

            }
            ans.push_back(temp);
        }
        return ans;
        
    }
};