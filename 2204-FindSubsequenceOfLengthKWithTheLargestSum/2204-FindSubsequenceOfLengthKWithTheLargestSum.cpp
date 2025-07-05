// Last updated: 5/7/2025, 11:26:45 am
class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>pq;

        for(int i=0;i<nums.size();i++){
            pq.push({nums[i],i});
        }

        priority_queue<pair<int,int>>pqi;

        for(int i=k;k>0;k--){
            pqi.push({pq.top().second,pq.top().first});
            pq.pop();
        }

        vector<int>ans;
        while(!pqi.empty()){
            ans.push_back(pqi.top().second);
            pqi.pop();
        }

        reverse(ans.begin(),ans.end());

        return ans;





        
    }
};