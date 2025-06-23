// Last updated: 24/6/2025, 12:42:44 am
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int pos=0;
        int neg=0;

        int total=nums.size();
        int count=0;

        vector<int>ans;

        while(count<total){
            if(nums[pos]>=0&&nums[neg]<0){
                ans.push_back(nums[pos]);
                ans.push_back(nums[neg]);

                pos++;
                neg++;
                count+=2;
                continue;
            }
            
            if(pos<nums.size()-1&&nums[pos]<0) pos++;

            if(neg<nums.size()-1&&nums[neg]>=0)    neg++;
        }

        return ans;
        
    }
};