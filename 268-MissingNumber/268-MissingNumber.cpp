// Last updated: 24/6/2025, 12:44:33 am
class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];

        }
        int n=nums.size();
        if(sum==(n*(n+1))/2)    return 0;
        
        return (n*(n+1))/2-sum;
        
    }
};