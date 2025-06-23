// Last updated: 24/6/2025, 12:44:12 am
class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {

        int temp=timeSeries[0]+duration;
        int ans=0;

        int start=timeSeries[0];

        for(int i=1;i<timeSeries.size();i++){
            if(timeSeries[i]<=temp){
                temp=timeSeries[i]+duration;
            }else{
                ans+=start-temp;
                start=timeSeries[i];
                temp=timeSeries[i]+duration;
            }
        }
        ans+=start-temp;
        return -ans;
        
    }
};