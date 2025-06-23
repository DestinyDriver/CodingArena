// Last updated: 24/6/2025, 12:42:51 am
class Solution {
public:
    long long countVowels(string word) {
        long long ans=0;
        int n=word.size();

        for(int i=0;i<word.size();i++){
            char el=word[i];
            if(el=='a'||el=='e'||el=='i'||el=='o'||el=='u'){
                // long long k=(((n-i-1)%INT_MAX)*((i)%INT_MAX)%INT_MAX);
                ans=ans+n+1LL*(n-i-1)*(i);
            }
        }return ans;
    }
};