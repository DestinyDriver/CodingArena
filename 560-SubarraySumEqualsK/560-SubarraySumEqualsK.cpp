// Last updated: 24/6/2025, 12:44:08 am
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int sum=0;
        int count=0;
        mp[sum]=1;

        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(mp.find(sum-k)!=mp.end()){
                count+=mp[sum-k];
            }
            mp[sum]++;
        }

        return count;
        
    }
};