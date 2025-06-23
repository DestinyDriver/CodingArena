// Last updated: 24/6/2025, 12:43:28 am
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>v=nums;
        sort(nums.begin(),nums.end());

        vector<int>ans;

        for(int i=0;i<nums.size();i++){
            auto it=find(nums.begin(),nums.end(),v[i]);
            int ct=distance(nums.begin(),it);
            ans.push_back(ct);
        }

        return ans;

        
    }
};