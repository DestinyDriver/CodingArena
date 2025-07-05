// Last updated: 5/7/2025, 11:27:04 am

class Solution {
    const int MOD=1000000007;


public:
    int numSubseq(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size()-1;
        vector<int>p(nums.size());
        p[0]=1;
        for(int i=1;i<nums.size();i++){
            p[i]=(p[i-1]*2)%MOD;

        }
        sort(nums.begin(),nums.end());
        int ans=0;

        while(l<=r){
            if(nums[l]+nums[r]<=target){
                ans=(ans%MOD+p[r-l]%MOD)%MOD;
                l++;
            }else if(nums[l]+nums[r]>target){
                r--;
            }

        }

        return ans;
        
    }//2 3 3 4 6 7 
    
};