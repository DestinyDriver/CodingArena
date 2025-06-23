// Last updated: 24/6/2025, 12:44:50 am
class Solution {
public:

    int solve(vector<int>&nums,int ind,vector<int>&dp){
        if(ind==nums.size()-1)    return nums[ind];
        if(ind>=nums.size() )    return 0;

        if(dp[ind]!=-1) return dp[ind];

        // include
        int include=solve(nums,ind+2,dp)+nums[ind];
        int  exclude=solve(nums,ind+1,dp);

        dp[ind]=max(include,exclude);

        return max(include,exclude);
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size()+1,-1);

        dp[0]=nums[0];

        if(nums.size()==1)  return dp[0];

        if(nums[0]>nums[1]) dp[1]=dp[0];
        else    dp[1]=nums[1];

        for(int i=2;i<nums.size();i++){
            dp[i]=max(dp[i-1],dp[i-2]+nums[i]);
        }
        return dp[nums.size()-1];


        
    }
};