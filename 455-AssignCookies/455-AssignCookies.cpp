// Last updated: 24/6/2025, 12:44:16 am
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int ct=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i=0;int j=0;
        while(j<s.size()&&i<g.size()){
            if(g[i]<=s[j]){
                i++;ct++;
            }
                j++;
            
            
        }
        return ct;
        
    }
};