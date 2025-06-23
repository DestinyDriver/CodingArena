// Last updated: 24/6/2025, 12:42:09 am
class Solution {
public:

    void dfs(int node,vector<vector<int>>&adj,unordered_map<int,bool>&visited,vector<int>&tp){
        visited[node]=true;
        tp.push_back(node);

        for(auto i:adj[node]){
            if(!visited[i]){
                dfs(i,adj,visited,tp);
            }
        }
    }
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n+1);
        vector<int>deg(n+1,0);
        unordered_map<int,bool>visited(n+1);

        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];

            adj[u].push_back(v);
            adj[v].push_back(u);

            deg[u]++;deg[v]++;


        }
        int ans=0;

        vector<int>tp;
        for(int i=0;i<n;i++){
            dfs(i,adj,visited,tp);
            bool flag=true;
            if(tp.size()==0)    continue;

            for(int i=0;i<tp.size();i++){
                if(deg[tp[i]]!=tp.size()-1){
                    flag=false;
                    break;
                }
            }

            tp.clear();
            if(flag)    ans++;
        }

        return ans;
    }
};