// Last updated: 24/6/2025, 12:42:27 am
class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int>ans;

        for(int i=0;i<pref.size();i++){
            int prev=0;
            if(i-1>=0){
                prev=pref[i-1];
            }
            ans.push_back(prev^pref[i]);
        }

        return ans;
        
    }
};