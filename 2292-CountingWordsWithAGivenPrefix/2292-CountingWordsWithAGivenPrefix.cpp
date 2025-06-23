// Last updated: 24/6/2025, 12:42:43 am
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int k=0;
        int count=0;

        for(int i=0;i<words.size();i++){
            k=0;
            for(int j=0;j<words[i].size();j++){
                if(words[i][j]==pref[k]){
                    k++;
                    if(k==pref.size())  count++;
                }else{
                    break;
                }
                
            }
        }

        return count;
        
    }
};