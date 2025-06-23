// Last updated: 24/6/2025, 12:43:38 am
class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        map<int,int>mp;
        for(int i=0;i<trips.size();i++){
            mp[trips[i][1]]+=trips[i][0];
            mp[trips[i][2]]-=trips[i][0];
        }

        int tp=0;

        for(auto [i,mk]:mp){
            tp+=mk;
            if(tp>capacity) return false;

        }

        return true;
        
    }
};