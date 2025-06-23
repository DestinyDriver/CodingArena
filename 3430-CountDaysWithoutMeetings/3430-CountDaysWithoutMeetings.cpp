// Last updated: 24/6/2025, 12:41:53 am
class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        vector<vector<int>>v;
        sort(meetings.begin(),meetings.end());

        v.push_back(meetings[0]);

        int j=0;int ans=0;

        for(int i=1;i<meetings.size();i++){
            if(v[j][1]>=meetings[i][0]){
                v[j][1]=max(meetings[i][1],v[j][1]);
            }else{
                ans+=v[j][1]-v[j][0]+1;
                v.push_back(meetings[i]);j++;
            }
        }

        ans+=v[j][1]-v[j][0]+1;

        return   days-ans;

        
    }
};