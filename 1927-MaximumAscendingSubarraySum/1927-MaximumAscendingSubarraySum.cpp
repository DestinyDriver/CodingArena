// Last updated: 24/6/2025, 12:43:01 am
class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxxi=nums[0];
        int temp=nums[0];

        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                temp+=nums[i];
            }else{
                temp=nums[i];
            }
            maxxi=max(maxxi,max(temp,nums[i]));
        }

        return maxxi;

        
    }
};