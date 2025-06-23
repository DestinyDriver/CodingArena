// Last updated: 24/6/2025, 12:45:33 am
class Solution {

    void tra(vector<int>v,vector<vector<int>>&ans,int ind){
        if(ind==v.size()){
            ans.push_back(v);return;
        }

        for(int i=ind;i<v.size();i++){
            swap(v[i],v[ind]);
            tra(v,ans,ind+1);
            swap(v[i],v[ind]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        tra(nums,ans,0);
        return ans;
        
        
    }
};



// class Solution {
//     void tra(vector<int>& nums,vector<int>temp,vector<bool>&mp,int i,vector<vector<int>>&ans){
//         if(i==nums.size()){
//             ans.push_back(temp);
//             return;
//         }

//         for(int k=0;k<nums.size();k++){
//             if(mp[k]==false){
//                 temp[k]=nums[i];
//                 mp[k]=true;
//                 tra(nums,temp,mp,i+1,ans);
//                 mp[k]=false;
//             }
//         }


//     }
// public:
//     vector<vector<int>> permute(vector<int>& nums) {
//         vector<int>temp(nums.size());
//         vector<bool>mp(nums.size(),false);
//         // vector<int> tempa(nums.size()); 
//         vector<vector<int>>ans;
//         tra(nums,temp,mp,0,ans);
//         return ans;
        
//     }
// };