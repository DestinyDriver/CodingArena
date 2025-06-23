// Last updated: 24/6/2025, 12:44:25 am
class Solution {
    static bool comp(vector<int>&a,vector<int>&b){
        return a[1]<b[1];
    }
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {

        sort(intervals.begin(),intervals.end(),comp);

        int end=intervals[0][1];
        int ct=1;
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]>=end){
                end=intervals[i][1];
                ct++;
            }
        }
        return intervals.size()-ct;
        
    }
};