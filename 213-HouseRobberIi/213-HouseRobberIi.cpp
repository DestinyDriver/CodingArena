// Last updated: 24/6/2025, 12:44:43 am
class Solution {
public:

    int solve(vector<int>&nums,int ind,vector<int>&dp){
        if(ind==nums.size()-1)    return nums[ind];
        if(ind>=nums.size())    return 0;

        if(dp[ind]!=-1) return dp[ind];

        // include
        int include=solve(nums,ind+2,dp)+nums[ind];
        int  exclude=solve(nums,ind+1,dp);

        dp[ind]=max(include,exclude);

        return max(include,exclude);
    }

    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);

        if(nums.size()==1)  return nums[0];

        vector<int>v1(nums.begin()+1,nums.end());
        int t1=solve(v1,0,dp);

        dp.clear();
        dp.resize(nums.size(),-1);

        vector<int>v2(nums.begin(),nums.end()-1);
        int t2=solve(v2,0,dp);

        return max(t1,t2);
        
    }
};