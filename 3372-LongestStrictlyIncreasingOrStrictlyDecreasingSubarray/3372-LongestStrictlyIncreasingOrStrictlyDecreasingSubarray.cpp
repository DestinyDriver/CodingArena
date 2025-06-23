// Last updated: 24/6/2025, 12:41:57 am
class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        if(nums.size()==1)  return 1;
        int inc=INT_MIN,dec=INT_MIN;
        int temp=0;
        int count=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1])   temp++;
            else temp=0;

            if(nums[i]>nums[i+1])   count++;
            else    count=0;

            inc=max(inc,temp);
            dec=max(dec,count);

        }

        return max(inc,dec)+1;


        
    }
};