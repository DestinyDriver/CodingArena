// Last updated: 24/6/2025, 12:43:43 am
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
// void tra(TreeNode*root,int d,map<int,vector<int>>&m){
//         if(root==NULL){
//             return;
//         }
        
//         m[d].push_back(root->val);
        
        
        
//         tra(root->left,d-1,m);
//         tra(root->right,d+1,m);
//     }


public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {

        // map<int,vector<int>>m;
        // tra(root,0,m);
        
        // vector<vector<int>>ans;
        
        // for(auto i:m){
        //     ans.push_back(i.second);
        // }
        
        
        // return ans;

        map<int,vector<int>>mp;
        vector<vector<int>>ans;

        queue<pair<TreeNode*,int>>q;

        q.push({root,0});

        while(!q.empty()){
            int lv=q.size();
            // vector<int>temp;
            unordered_map<int,vector<int>>temp;




            for(int i=0;i<lv;i++){
                auto [l,m]=q.front();
                q.pop();

                if(l->left)     q.push({l->left,m-1});
                if(l->right)    q.push({l->right,m+1});

                // temp.push_back(l->val);

                // mp[m].push_back(l->val);
                temp[m].push_back(l->val);
            }


            for(auto i:temp){
                sort(i.second.begin(),i.second.end());
                
                for(auto j:i.second){
                    mp[i.first].push_back(j);
                }

            }



            
        }


        for(auto i:mp){
            // sort(i.second.begin(),i.second.end());
            ans.push_back(i.second);
        }

        return ans;






        
    }
};