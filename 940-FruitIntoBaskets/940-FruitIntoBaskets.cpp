// Last updated: 24/6/2025, 12:43:50 am
class Solution {
public:
    int totalFruit(vector<int>& f) {
        unordered_map<int,int>mp;

        // return 0;

        int ans=0;int l=0;

        for(int i=0;i<f.size();i++){
            mp[f[i]]++;

            while(mp.size()>2){
                mp[f[l]]--;
                if(mp[f[l]]==0) mp.erase(f[l]);
                l++;
            }

            ans=max(ans,i-l+1);
            

        }
        return ans;
        
    }
};