// Last updated: 24/6/2025, 12:44:20 am
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>ans;


        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            if(mp[nums[i]]==2){ans.emplace_back(nums[i]);}
        }

        

       

        return ans;
        
    }
};