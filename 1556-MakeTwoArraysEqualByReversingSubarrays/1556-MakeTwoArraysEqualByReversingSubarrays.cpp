// Last updated: 24/6/2025, 12:43:21 am
class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
       sort(arr.begin(),arr.end());
       sort(target.begin(),target.end());

       for(int i=0;i<arr.size();i++){
        if(target[i]!=arr[i])
            return false;
       }
        return true;
    }
};