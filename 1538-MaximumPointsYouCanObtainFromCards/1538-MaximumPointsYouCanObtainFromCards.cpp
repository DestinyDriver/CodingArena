// Last updated: 24/6/2025, 12:43:23 am
class Solution {
public:
    int maxScore(vector<int>& cp, int k) {
        int ans=-1;
        int lsum=0;
        int rsum=0;
        int i=0;
        while(i<k){
            lsum+=cp[i];
            i++;
        }
        ans=max(ans,lsum);
        int r=cp.size()-1;
        while(i-1>=0){
            i--;
            lsum-=cp[i];
            rsum+=cp[r];
            ans=max(ans,lsum+rsum);
            r--;
        }
        return ans;
        
    }
};