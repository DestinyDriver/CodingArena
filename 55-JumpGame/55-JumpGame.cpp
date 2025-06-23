// Last updated: 24/6/2025, 12:45:25 am
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int j=nums.size()-1;

        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]>=j-i)    j=i;
        }
        return j==0;
        
    }
};