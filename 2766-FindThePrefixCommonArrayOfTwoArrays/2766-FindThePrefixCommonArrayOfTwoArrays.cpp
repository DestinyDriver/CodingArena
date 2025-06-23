// Last updated: 24/6/2025, 12:42:12 am
class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {

        unordered_map<int,int>mp1,mp2;
        vector<int>ans;
        int ctr=0;
        for(int i=0;i<A.size();i++){
            mp1[A[i]]++;
            mp2[B[i]]++;

            if(A[i]==B[i])  {ctr++;ans.push_back(ctr); continue;}
            if(mp1[A[i]]==mp2[A[i]])  ctr++;
            if(mp1[B[i]]==mp2[B[i]])    ctr++;

            ans.push_back(ctr);  


        }

        return ans;

        
    }
};