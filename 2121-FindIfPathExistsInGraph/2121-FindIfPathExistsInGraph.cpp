// Last updated: 24/6/2025, 12:42:54 am
class Solution {
public:


    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {

        if(source==destination){
            return true;
        }
        vector<vector<int>>adj(n);

        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];

            adj[u].push_back(v);
            adj[v].push_back(u);

        }
        
        unordered_map<int,bool>visited;

        queue<int>q;
        q.push(source);
        visited[source]=true;
        bool a=false;


        while(!q.empty()){
            int fr=q.front();
            q.pop();

            for(int i=0;i<adj[fr].size();i++){
                if(!visited[adj[fr][i]]){
                    if(adj[fr][i]==destination) {a=true;break;}
                    q.push(adj[fr][i]);
                    visited[adj[fr][i]]=true;

                }

            }
        }

        return a;
    }
};