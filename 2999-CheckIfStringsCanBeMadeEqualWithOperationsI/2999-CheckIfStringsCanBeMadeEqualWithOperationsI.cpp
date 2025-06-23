// Last updated: 24/6/2025, 12:42:05 am
class Solution {
public:
    bool canBeEqual(string s1, string s2) {

        for(int i=0;i<=s1.size()-2;i++){
            if(s1.compare(s2)==0)
            return true;
            if(s1[i]!=s2[i]){
            char a=s1[i];
            s1[i]=s1[i+2];
            s1[i+2]=a;
            }
        }
        return false;
        
    }
};