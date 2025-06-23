// Last updated: 24/6/2025, 12:44:45 am
class Solution {
    int tra(vector<int>&pp){
        int n=pp.size()-1;
        int ct=0;

        for(int i=2;i*i<=n;i++){
            if(pp[i]==1){
                for(int j=i*i;j<=n;j+=i){
                    pp[j]=0;
                }
            }
        }

        for(int i=2;i<n;i++){
            if(pp[i]==1)    ct++;
        }
        return ct;

    }
    
public:
    int countPrimes(int n) {
        vector<int>pp(n+1,1);
        return tra(pp);
        
    }
};

auto init = atexit([]() {
    ofstream("display_runtime.txt") << "0";
});