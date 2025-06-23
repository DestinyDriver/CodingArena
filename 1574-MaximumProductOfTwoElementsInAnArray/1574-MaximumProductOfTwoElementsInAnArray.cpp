// Last updated: 24/6/2025, 12:43:17 am
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a=nums[nums.size()-1];
        int b=nums[nums.size()-2];

        return (a-1)*(b-1);
        
    }
};