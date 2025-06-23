// Last updated: 24/6/2025, 12:42:08 am
class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        vector<int>alp(10,0);
        int n=nums.size();
        int ans=0;
        // storing the first digit in vector as we passing

        for(int i=0;i<n;i++){
            int a=nums[i]%10;

            for(int  j=0;j<10;j++){
                if(gcd(a,j)==1)    ans+=alp[j];//initially at i=0 if a=1 then the ans is adding 0 at each step
            }

            while(nums[i]>=10){
                nums[i]/=10;
            }
            alp[nums[i]]++;
        }

        return ans;

        
    }
};