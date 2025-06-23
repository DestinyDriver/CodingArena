// Last updated: 24/6/2025, 12:45:26 am
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        int total=matrix[0].size()*matrix.size();
        vector<int>ans;

        int count=0;
        int startcol=0;
        int endcol=matrix[0].size()-1;
        int startrow=0;
        int endrow=matrix.size()-1;


        while(count<total){

            //u
            for(int i=startcol;i<=endcol&&count<total;i++){
                ans.push_back(matrix[startrow][i]);
                count++;
            }
            startrow++;
            

            //r
            for(int i=startrow;i<=endrow&&count<total;i++){
                ans.push_back(matrix[i][endcol]);
                count++;
            }
            endcol--;

            //b
            for(int i=endcol;i>=startcol&&count<total;i--){
                ans.push_back(matrix[endrow][i]);
                count++;
            }
            endrow--;
       
            //l
            for(int i=endrow;i>=startrow&&count<total;i--){
                ans.push_back(matrix[i][startcol]);
                count++;
            }
            startcol++;   

        }
        return ans;


        
    }
};