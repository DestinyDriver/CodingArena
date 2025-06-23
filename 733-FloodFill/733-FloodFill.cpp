// Last updated: 24/6/2025, 12:43:59 am
class Solution {
    private:
    void dfs(int row,int col,vector<vector<int>>& image, int delr[],int delc[],int inicolor,int newcolor){
        image[row][col]=newcolor;
        int n=image.size();
        int m=image[0].size();
        for(int i=0;i<4;i++){
            int nrow = row + delr[i];
            int ncol = col + delc[i];
            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && image[nrow][ncol] == inicolor){
                dfs(nrow,ncol,image,delr,delc,inicolor,newcolor);
            }
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int inicolor=image[sr][sc];
        if (inicolor == color) return image;
        int delr[]={-1,0,1,0};
        int delc[]={0,1,0,-1};
        dfs(sr,sc,image,delr,delc,inicolor,color);
        return image;
    }
};