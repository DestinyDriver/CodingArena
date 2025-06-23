// Last updated: 24/6/2025, 12:43:03 am
class Solution {
public:
    int findCenter(vector<vector<int>>& e) {
        if(e[0][0]==e[1][0])    return e[1][0];
        if(e[0][1]==e[1][0])    return e[1][0];
        if(e[0][1]==e[1][1])    return e[1][1];
        if(e[0][0]==e[1][1])    return e[1][1];

        return -1;
    }
};