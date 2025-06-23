// Last updated: 24/6/2025, 12:44:09 am
class Solution {
public:

    void dfs(vector<vector<int>>&adj,int node,unordered_map<int,bool>&visited){
        visited[node]=true;

        for(int i:adj[node]){
            if(!visited[i])
            dfs(adj,i,visited);
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<vector<int>>adj(isConnected.size());
        for(int i=0;i<isConnected.size();i++){
            for(int j=0;j<isConnected[0].size();j++){
                if(isConnected[i][j]==1)    adj[i].push_back(j);
            }
        }

        unordered_map<int,bool>visited(isConnected.size());
        int ct=0;


        for(int i=0;i<adj.size();i++){
            if(!visited[i]){
                dfs(adj,i,visited);
                ct++;
            }

        }
        return ct;

        
    }
};