// Last updated: 24/6/2025, 12:45:31 am
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        
        int n=matrix[0].size();
        
        


        for(int i=0;i<(n+1)/2;i++){
            for(int j=i;j<n-i-1;j++){
                swap(matrix[i][j],matrix[j][n-i-1]);
                swap(matrix[i][j],matrix[n-i-1][n-j-1]);
                swap(matrix[i][j],matrix[n-j-1][i]);    
            }
        }
        
    }
};