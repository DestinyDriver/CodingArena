// Last updated: 24/6/2025, 12:43:34 am
class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {

        int ans=0;

        for(int i=0;i<points.size()-1;i++){
            int y=abs(points[i][0]-points[i+1][0]);
            int x=abs(points[i][1]-points[i+1][1]);
            ans+=max(x,y);

        }
        return ans;
        
    }
};