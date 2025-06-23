// Last updated: 24/6/2025, 12:44:34 am
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {

        long long x=0;
        for(int i=0;i<nums.size();i++){
            x=x^nums[i];
        }

        long long fi=(x&(x-1))^x;

        int a=0,b=0;

        for(int i=0;i<nums.size();i++){
            if((fi&nums[i])!=0)   a=a^nums[i];
            else    b=b^nums[i];

        }

        return {a,b};
        
    }
};