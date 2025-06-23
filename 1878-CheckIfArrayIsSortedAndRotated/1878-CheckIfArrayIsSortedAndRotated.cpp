// Last updated: 24/6/2025, 12:43:05 am
class Solution {
public:
    bool check(vector<int>& nums) {
        int count=0;

        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1])
                count++;

        }

        if(nums[0]<nums[nums.size()-1])
            count++;
        return count<=1;

        
    }
};