// Last updated: 24/6/2025, 12:44:19 am
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        unordered_set<int>s;

        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }

        for(int i=0;i<nums.size();i++){
            if(s.count(i+1)==0){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};