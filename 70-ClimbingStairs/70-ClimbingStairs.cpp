// Last updated: 24/6/2025, 12:45:22 am
class Solution {
public:

    int solve(int n,int k,vector<int>&dp){
        if(n==k)    return 1;
        if(n>k) return 0;

        if(dp[n]!=-1){
            return dp[n];
        }

        dp[n]=solve(n+1,k,dp)+solve(n+2,k,dp);
        return solve(n+1,k,dp)+solve(n+2,k,dp);
    }


    int climbStairs(int n) {
        vector<int>dp(n+2,0);
        if(n==1){return 1;}
        dp[n]=1;
        dp[n-1]=1;
        for(int i=n-2;i>=0;i--){
            dp[i]=dp[i+1]+dp[i+2];
        }

        return dp[0];



        
        
    }
};