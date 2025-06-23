// Last updated: 24/6/2025, 12:44:05 am
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double temp=0;
        int l=0;
        int r=k-1;
        for(int i=0;i<k;i++){
            temp+=nums[i];
        }
        double avg=INT_MIN;
        avg=max(temp,avg);

        while(r+1<nums.size()){
            r++;
            temp=temp-nums[l]+nums[r];
            l++;
            
            avg=max(temp,avg);
        }
        // double ans=float(avg)/float(k);
        // double factor=pow(10,5);
        // ans=round(ans*factor)/factor;
        // setprecision(5);
        return avg/float(k);
    }
};