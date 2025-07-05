// Last updated: 5/7/2025, 11:26:07 am
class Solution {
public:
    char kthCharacter(int l) {
        
        int i=0;

        while((1<<i)<l) i++;
        // int l=k;

        string s="a";
        for(int j=0;j<i;j++){
            
            int n=s.size();
            for(int k=0;k<n;k++){
                if(s[k]=='z'){
                    s+='a';continue;
                }
                s+=s[k]+1;

            }

        }
        return s[l-1];



        
    }
};