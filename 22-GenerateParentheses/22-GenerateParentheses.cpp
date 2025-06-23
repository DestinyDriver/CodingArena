// Last updated: 24/6/2025, 12:45:49 am
class Solution {
    void tra(int op,int cl,int &n,vector<string>&ans,string s){
        if(op==n&&cl==n){
            ans.emplace_back(s);return;
        }
        if(op<n) tra(op+1,cl,n,ans,s+"(");
        if(cl<op)   tra(op,cl+1,n,ans,s+")");
    }
public:
    vector<string> generateParenthesis(int n) {

        vector<string>ans;
        tra(0,0,n,ans,"");
        return ans;
        
    }
};