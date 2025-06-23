// Last updated: 24/6/2025, 12:42:39 am
class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {

        map<int,int>mp;
        for(int i=0;i<flowers.size();i++){
            mp[flowers[i][0]]+=1;
            mp[flowers[i][1]+1]-=1;
        }
        int ct=0;

        for(auto &[i,mk]:mp){
            ct+=mk;
            mk=ct;
        }
        vector<int>ans;

        for(int i=0;i<people.size();i++){
            auto it=mp.upper_bound(people[i]);
            if(it==mp.begin()){
                ans.push_back(0);
            }else{
                it--;
                ans.push_back(it->second);
                
            }

        }
        return ans;
        
    }
};