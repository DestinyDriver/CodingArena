// Last updated: 24/6/2025, 12:44:51 am
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        if(k==0)    return;
        
        vector<int>v(nums.end()-k,nums.end());


        for(int i=0;i<nums.size()-k;i++) 
            v.emplace_back(nums[i]);
        
        nums=v;

        
    }
};