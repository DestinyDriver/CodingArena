// Last updated: 24/6/2025, 12:45:01 am
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;

        for(int i=0;i<nums.size();i++){
            ans=ans^nums[i];
            
        }

        return ans;
        
    }
};