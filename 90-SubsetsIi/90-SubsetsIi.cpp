// Last updated: 24/6/2025, 12:45:14 am
class Solution {
    void tra(vector<int>&nums,vector<int>&temp,vector<vector<int>>&ans,int ind,int took){
        if(ind==nums.size()){
            ans.push_back(temp);return;
        }

        if(nums[ind]!=took){
            tra(nums,temp,ans,ind+1,took);
        }
        temp.push_back(nums[ind]);
        tra(nums,temp,ans,ind+1,nums[ind]);
        temp.pop_back();
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;vector<int>temp;
        sort(nums.begin(),nums.end());
        tra(nums,temp,ans,0,-11);
        return ans;
        
    }
};