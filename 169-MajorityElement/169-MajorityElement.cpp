// Last updated: 24/6/2025, 12:44:52 am
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int cand=nums[0];
        int pt=0;

        for(int i=1;i<nums.size();i++){
            if(nums[i]==cand){
                pt++;
            }else if(pt==0){
                cand=nums[i];
            }else{
                pt--;
            }
        }
        return cand;
        
    }
};