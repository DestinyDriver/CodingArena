// Last updated: 24/6/2025, 12:43:11 am
class Solution {
public:

    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {

        vector<bool>in(n);


        for(int i=0;i<edges.size();i++){

            int v=edges[i][1];

 
            in[v]=true;

        }


        
        
        

        vector<int>ans;

        for(int i=0;i<n;i++){
            if(!in[i]){
                ans.push_back(i);
            }
        }


        return ans;


        
    }
};