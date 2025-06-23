// Last updated: 24/6/2025, 12:43:14 am
class Solution {
public:
    int xorOperation(int n, int start) {
        int ans=0;
        for(int i=0;i<n;i++){
            ans=ans^(start+2*i);

        }
        return ans;
        
    }
};