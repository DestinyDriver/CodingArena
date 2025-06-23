// Last updated: 24/6/2025, 12:42:33 am
class Solution {
public:
    

    void topo2(vector<vector<int>>&adj,vector<int>&indeg,vector<int>&ans_tp){
        queue<int>q;

        for(int i=1;i<indeg.size();i++){
            if(indeg[i]==0){
                q.push(i);

            }
        }

        while(!q.empty()){
            int fr=q.front();
            q.pop();
            ans_tp.push_back(fr);

            for(auto i:adj[fr]){
                indeg[i]--;
                if(indeg[i]==0){
                    q.push(i);
                }
            }
        }

    }
    vector<vector<int>> buildMatrix(int k, vector<vector<int>>& r, vector<vector<int>>& c) {
        vector<vector<int>>adjr(k+1);
        vector<vector<int>>adjc(k+1);

        vector<int>topor,topoc;
        vector<int>indeg(k+1);


        for(int i=0;i<r.size();i++){
            int u=r[i][0];
            int v=r[i][1];

            adjr[u].emplace_back(v);
            indeg[v]++;

        }

        topo2(adjr,indeg,topor);


        

        indeg = vector<int>(k + 1, 0);

        for(int i=0;i<c.size();i++){
            int u=c[i][0];
            int v=c[i][1];

            adjc[u].emplace_back(v);
            indeg[v]++;

        }

        topo2(adjc,indeg,topoc);

        




        // adj done
        // ?now top

        if(topor.size()!=k||topoc.size()!=k)    return {};


        vector<vector<int>>ans(k,vector<int>(k,0));

        for(int i=1;i<=k;i++){
            auto it=find(topor.begin(),topor.end(),i);
            int row=it-topor.begin();

            it=find(topoc.begin(),topoc.end(),i);
            int col=it-topoc.begin();

            ans[row][col]=i;
        }

        return ans;



        



        
        






    }
};