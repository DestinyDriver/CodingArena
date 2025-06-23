// Last updated: 24/6/2025, 12:41:56 am
class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;

        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                ans=(ans^nums[i]);
                i+=1;
            }
        }
        return ans;
        
    }
};