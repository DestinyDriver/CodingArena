// Last updated: 24/6/2025, 12:43:10 am
class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int,bool>mp;

        int sum=0;
        int tp=0;
        int r=0;

        for(int i=0;i<nums.size();i++){
            tp+=nums[i];
            if(mp.find(nums[i])!=mp.end()){
                while(nums[i]!=nums[r]){
                    tp-=nums[r];
                    mp.erase(nums[r]);
                    r++;
                }
                tp-=nums[r];
                r++;
            }
            mp[nums[i]]=true;
            sum=max(sum,tp);
        }

        return sum;

        
    }
};