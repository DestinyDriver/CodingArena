// Last updated: 24/6/2025, 12:45:36 am
class Solution {
    void tra(vector<int>&nums,int sum,vector<int>&temp,vector<vector<int>>&ans,int &k,int ind){
        if(sum>k)   return;
        if(sum==k){
            ans.push_back(temp);return;
        }

        for(int i=ind;i<nums.size();i++){
            temp.push_back(nums[i]);
            tra(nums,sum+nums[i],temp,ans,k,i);
            temp.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp;vector<vector<int>>ans;
        tra(candidates,0,temp,ans,target,0);
        return ans;
        
    }
};