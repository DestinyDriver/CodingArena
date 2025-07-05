// Last updated: 5/7/2025, 11:28:03 am
class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        
        for(int i=shifts.size()-1;i>=0;i--){
            if(i==shifts.size()-1){
                shifts[i]=shifts[i]%26;
            }
            else    shifts[i]=(((shifts[i+1])%26)+((shifts[i])%26))%26;

            s[i]=(s[i]-'a'+shifts[i])%26+'a';
        }
        return s;
        

    }
};