// Last updated: 24/6/2025, 12:44:18 am
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int ct=0;
        sort(points.begin(),points.end(),[](vector<int>&a,vector<int>&b){
            return a[1]<b[1];
        });

        int end=points[0][1];ct++;

        for(int i=1;i<points.size();i++){
            if(points[i][0]>end){
                end=points[i][1];ct++;
            }

            
            
        }
        return ct;
        
    }
};