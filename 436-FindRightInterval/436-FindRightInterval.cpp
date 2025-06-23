// Last updated: 24/6/2025, 12:44:23 am
class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        map<int,int>mp;vector<int>ans;
        for(int i=0;i<intervals.size();i++)  mp[intervals[i][0]]=i;
        for(int i=0;i<intervals.size();i++){
            auto it=mp.lower_bound(intervals[i][1]);
            if(it==mp.end()){
                ans.push_back(-1);
            }else{
                ans.push_back(it->second);
            }
        }
        
        return ans;
    }
};