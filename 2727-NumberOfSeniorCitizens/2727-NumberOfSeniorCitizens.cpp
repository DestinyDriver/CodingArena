// Last updated: 24/6/2025, 12:42:15 am
class Solution {
public:
    int countSeniors(vector<string>& details) {

        int count=0;
        for(int i=0;i<details.size();i++){
            if(stoi(details[i].substr(11,2))>60) count++;
        }
        return count;
        
    }
};