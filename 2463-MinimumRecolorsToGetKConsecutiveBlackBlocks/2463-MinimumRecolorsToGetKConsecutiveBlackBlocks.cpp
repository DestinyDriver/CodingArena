// Last updated: 24/6/2025, 12:42:35 am
class Solution {
public:
    int minimumRecolors(string bl, int k) {
        int w=0;int ans=0;
        for(int i=0;i<k;i++){
            if(bl[i]=='W')  w++;
        }
        ans=w;
        
        for(int i=k;i<bl.size();i++){
            if(bl[i]=='W')  w++;
            if(bl[i-k]=='W')    w--;
            ans=min(w,ans);
            if(ans==0)  return 0;
        }return ans;
        
    }
};