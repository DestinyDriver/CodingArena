// Last updated: 24/6/2025, 12:42:11 am
class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int k=derived[0];;

          

        for(int i=1;i<derived.size();i++){
            k=k^derived[i];
        }

        if(k==0)    return true;

        return false;
        
    }
};