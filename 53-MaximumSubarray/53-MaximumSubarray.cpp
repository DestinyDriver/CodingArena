// Last updated: 24/6/2025, 12:45:27 am
class Solution {
public:

    
    int maxSubArray(vector<int>& nums) {
        int curr_sum=nums[0];
        int maxxi=nums[0];

        for(int i=1;i<nums.size();i++){
            curr_sum=max(curr_sum+nums[i],nums[i]);
            maxxi=max(maxxi,curr_sum);
        }
        return maxxi;

        
        
    }
};