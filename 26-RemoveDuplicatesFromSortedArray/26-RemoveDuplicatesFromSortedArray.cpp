// Last updated: 24/6/2025, 12:45:46 am
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
       
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                nums.erase(nums.begin()+i);
                i--;n--;
            }
        }
        return nums.size();
        
    }
};