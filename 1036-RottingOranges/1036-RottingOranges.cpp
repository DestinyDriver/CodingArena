// Last updated: 24/6/2025, 12:43:42 am
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        int row=grid.size(),col=grid[0].size();

        int ct=0,fr=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                    // ct++;
                }
                else if(grid[i][j]==1)  {fr++;}
            }
        }

        int t=0;
        
        if(q.size()==0){
            if(fr==0){
                return 0;
            }else{
                return -1;
            }
        }

        q.push({-1,-1});

        while(!q.empty()){
            pair p=q.front();
            q.pop();

            if(p.first==-1){
                
                if(!q.empty()){
                    t++;
                    q.push({-1,-1});
                }else{
                    break;
                }
            }else{
                auto [i,j]=p;

                // right
                if(j+1<col&&grid[i][j+1]==1){
                    q.push({i,j+1});
                    grid[i][j+1]=2;
                    ct++;
                }

                // left
                if(j-1>=0&&grid[i][j-1]==1){
                    q.push({i,j-1});
                    grid[i][j-1]=2;
                    ct++;
                }

                // top
                if(i+1<row&&grid[i+1][j]==1){
                    q.push({i+1,j});
                    grid[i+1][j]=2;
                    ct++;
                }

                // bottom
                if(i-1>=0&&grid[i-1][j]==1){
                    q.push({i-1,j});
                    grid[i-1][j]=2;
                    ct++;
                }
            }
        }

        if(ct!=fr)  return -1;

        return t;


        
    }
};