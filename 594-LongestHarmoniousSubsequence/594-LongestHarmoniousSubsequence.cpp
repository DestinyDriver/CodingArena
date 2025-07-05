// Last updated: 5/7/2025, 11:28:12 am
class Solution {
public:
    int findLHS(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;

        }
        int ans=0;

        for(int i=nums.size()-1;i>0;i--){
            if(nums[i]-nums[i-1]==1){
                ans=max(ans,mp[nums[i]]+mp[nums[i-1]]);

            }
        }
        return ans;
        
    }
};