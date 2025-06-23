// Last updated: 24/6/2025, 12:42:17 am
class Solution {
    // #define int long long
    vector<bool>sieve;
    void tra(){
        int n=4000001;
        sieve=vector<bool>(4000001,true);
        sieve[0]=sieve[1]=false;

        for(int i=2;i*i<n;i++){
            if(sieve[i]){
                for(int j=i*i;j<n;j+=i){
                        sieve[j]=false;
            }
            }
            
        }

    }
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        tra();
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(sieve[nums[i][i]])   ans=max(ans,nums[i][i]);
            if(sieve[nums[i][nums.size()-1-i]]) ans=max(ans,nums[i][nums.size()-i-1]);
        }
        return ans;

        
    }
};