// Last updated: 24/6/2025, 12:45:20 am
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int ctr=0;
        
        for(int i=1;i<matrix[0].size();i++){
            if(matrix[0][i]==0){
                ctr++;
            }
        }

        int ctc=0;
        if(matrix[0][0]==0){
            ctc++;
            ctr++;
        }

        for(int i=1;i<matrix.size();i++){
            if(matrix[i][0]==0){
                ctc++;
            }
        }
        
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }

        
        for(int i=1;i<matrix[0].size();i++){
            if(matrix[0][i]==0){
                
                for(int k=1;k<matrix.size();k++)    matrix[k][i]=0;
            }
        }


        for(int i=1;i<matrix.size();i++){
            if(matrix[i][0]==0){
               
                for(int k=1;k<matrix[0].size();k++)    matrix[i][k]=0;
            }
        }


        if(ctc!=0){
            for(int i=0;i<matrix.size();i++){
                matrix[i][0]=0;
            }
        }

        if(ctr!=0){
            for(int i=0;i<matrix[0].size();i++){
                matrix[0][i]=0;
            }
        }


        
    }
};