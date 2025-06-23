// Last updated: 24/6/2025, 12:42:56 am
class Solution {
    int gcd(int a,int b){
        if(b==0)    return a;

        return gcd(b,a%b);

    }
public:
    int findGCD(vector<int>& nums) {

        int mini=1001;
        int maxi=0;


        for(int i=0;i<nums.size();i++){
            maxi=max(maxi,nums[i]);
            mini=min(mini,nums[i]);
        }

        // return gcd(maxi,mini);
        int temp=0;

        while(mini!=0){
            temp=mini;
            mini=maxi%mini;
            maxi=temp;
            
        }
        return maxi;
    }
};