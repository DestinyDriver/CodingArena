// Last updated: 24/6/2025, 12:41:55 am
class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        
        if(nums.size()==1)  return true;

        for(int i=0;i<nums.size()-1;i++){
            if(((nums[i]^nums[i+1])&1)==0)    return false;
        }
        return true;
        
    }
};