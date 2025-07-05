// Last updated: 5/7/2025, 11:28:10 am
class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        if(ops.size()==0)   return m*n;
        map<int,int>mp;
        int a=INT_MAX;
        int b=INT_MAX;
        
        for(int i=0;i<ops.size();i++){
            a=min(a,ops[i][0]);
            b=min(b,ops[i][1]);
        }

        return a*b;

        
        
    }
};