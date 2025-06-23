// Last updated: 24/6/2025, 12:42:36 am
class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {

        int mx=0;

        for(int i=0;i<cards.size();i++){
            mx=max(mx,cards[i]);
        }

        vector<int>v(mx+1,-1);
        int ans=INT_MAX;

        for(int i=0;i<cards.size();i++){
            if(v[cards[i]]==-1){
                v[cards[i]]=i;
            }else{
                ans=min(ans,i-v[cards[i]]+1);
                v[cards[i]]=i;
            }

        }
        return ans==INT_MAX?-1:ans;
        
    }
};