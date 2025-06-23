// Last updated: 24/6/2025, 12:43:53 am
#include<bits/stdc++.h>
class Solution {
public:
    void func(vector<vector<int>>&adj,unordered_map<int,bool>&visited,int &ct,int node){
        visited[node]=true;
        ct++;

        for(auto i:adj[node]){
            if(!visited[i]){
                func(adj,visited,ct,i);
            }
        }

    }
    bool canVisitAllRooms(vector<vector<int>>& r) {
        unordered_map<int,bool>visited;
        // visited[0]=true;

        int ct=0;
        func(r,visited,ct,0);

        if(ct==r.size())    return true;

        return false;
        
    }
};