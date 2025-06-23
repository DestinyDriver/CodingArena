// Last updated: 24/6/2025, 12:45:37 am
class Solution {
    bool tra(int i,int j,vector<vector<char>>&board,vector<vector<int>>&rmp,vector<vector<int>>&cmp,vector<vector<int>>&smp){
        if(i==9){
            return true;
        }
        if(j==9){
            return tra(i+1,0,board,rmp,cmp,smp);
        }

        if(board[i][j]!='.'){
            return tra(i,j+1,board,rmp,cmp,smp);
        }

        for(int k=1;k<10;k++){
            if(!rmp[i][k]&&!cmp[j][k]&&!smp[(i/3)*3+(j/3)][k]){
                board[i][j]='0'+k;
                rmp[i][k]=cmp[j][k]=smp[(i/3)*3+(j/3)][k]=true;
                if(tra(i,j+1,board,rmp,cmp,smp))    return true;
                rmp[i][k]=cmp[j][k]=smp[(i/3)*3+(j/3)][k]=false;
                board[i][j]='.';

            }
        }

        return false;


    }
public:
    void solveSudoku(vector<vector<char>>& board) {
        vector<vector<int>>rmp(9,vector<int>(10));
        vector<vector<int>>cmp(9,vector<int>(10));

        vector<vector<int>>smp(9,vector<int>(10));


        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    int el=board[i][j]-'0';
                    rmp[i][el]=cmp[j][el]=smp[(i/3)*3+(j/3)][el]=true;
                }
            }
        }
        bool b=tra(0,0,board,rmp,cmp,smp);

        


        
    }
};