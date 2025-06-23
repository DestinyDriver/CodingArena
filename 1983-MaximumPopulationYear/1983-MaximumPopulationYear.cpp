// Last updated: 24/6/2025, 12:43:00 am
class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        map<int,int>mp;
        for(int i=0;i<logs.size();i++){
            mp[logs[i][0]]+=1;
            mp[logs[i][1]]-=1;
        }

        int yr=2;
        int ct=0;
        int tp=0;

        for(auto [i,mk]:mp){
            ct+=mk;
            if(ct>tp){
                tp=ct;
                yr=i;
            }
        }
        return yr;


        
    }
};