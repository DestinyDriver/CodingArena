// Last updated: 24/6/2025, 12:42:53 am
class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {

        long long int sum=0;
        long long int mini=1e18;

        for(int i=0;i<grid[0].size();i++){
            sum+=grid[0][i];
        }

        long long int tpl=0;

        for(int i=0;i<grid[0].size();i++ ){
            sum=sum-grid[0][i];
            if(i-1>=0)  tpl+=grid[1][i-1];

            mini=min(mini,max(tpl,sum));
        }

        return mini;
        
    }
};