// Last updated: 24/6/2025, 12:44:14 am
class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int ans=0;

        for(int i=0;i<32;i++){
            int temp=0;
            for(int j=0;j<nums.size();j++){
                if((nums[j]&(1<<i))!=0)  temp++;

            }

            ans+=(nums.size()-temp)*temp;
        }

        return ans;
        
    }
};