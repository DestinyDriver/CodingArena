// Last updated: 24/6/2025, 12:42:57 am
class Solution {
public:
    bool isThree(int n) {
        int ct=0;

        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                if(i==n/i)  ct++;
                else ct+=2;
            }

        }

        return ct==1?true:false;
        
    }
};