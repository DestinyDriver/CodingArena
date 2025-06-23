// Last updated: 24/6/2025, 12:45:19 am
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0;
        int r=nums.size()-1;
        int k=0;

        while(k<=r){

            
            if(nums[k]==0){
                swap(nums[k],nums[l]);
                l++;
            }

            if(nums[k]==2){
                swap(nums[k],nums[r]);
                k--;
                
                r--;
            }

            k++;
        }
        
    }
};