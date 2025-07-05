// Last updated: 5/7/2025, 11:27:12 am
class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(auto i:arr){
            mp[i]++;
        }
        int ans=-1;
        for(auto i:mp){
            if(i.first==i.second){
                ans=max(ans,i.first);
            }

        }
        return ans;
        
    }
};