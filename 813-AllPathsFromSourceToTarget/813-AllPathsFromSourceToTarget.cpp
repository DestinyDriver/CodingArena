// Last updated: 24/6/2025, 12:43:56 am
class Solution {
public:
    void dfs(vector<vector<int>>&adj,int node,vector<vector<int>>&ans,vector<int>&temp){

        temp.push_back(node);
        if(node==adj.size()-1){
            ans.push_back(temp);
        }

        for(int i=0;i<adj[node].size();i++){

                dfs(adj,adj[node][i],ans,temp);

        }

        // visited[node]=false;
        temp.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int src=0;
        int dest=graph.size()-1;

        vector<int>temp;
        vector<vector<int>>ans;

        

        dfs(graph,src,ans,temp);
        return ans;
        
    }
};