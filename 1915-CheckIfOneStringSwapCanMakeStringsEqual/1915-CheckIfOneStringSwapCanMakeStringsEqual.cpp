// Last updated: 24/6/2025, 12:43:04 am
class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2)return true;
        int ct=0;
        int l=0;

        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i]){
                ct++;
                if(ct==2){
                    swap(s1[l],s1[i]);
                    if(s1!=s2)  return false;
                    break;
                }
                l=i;
            }
        }
        if(ct==1)return false;
        return true;
        
    }
};