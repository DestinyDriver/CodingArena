// Last updated: 24/6/2025, 12:45:23 am
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        map<int,int>mp;

        for(int i=0;i<intervals.size();i++){
            mp[intervals[i][0]]+=1;
            mp[intervals[i][1]]-=1;
        }

        int st=0;
        int ct=0;

        for(auto [a,mk]:mp){
            if(ct==0){
                st=a;
            }
            ct+=mk;
            if(ct==0){
                ans.push_back({st,a});
            }
        }
        return ans;
        
    }
};