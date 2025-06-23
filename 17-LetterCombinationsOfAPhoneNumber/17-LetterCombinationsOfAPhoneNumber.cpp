// Last updated: 24/6/2025, 12:45:54 am
class Solution {
    void tra(string &d,string s,int i,vector<string>&ans,unordered_map<int,vector<char>>&mp){
        if(i==d.size()){
            ans.push_back(s);
            return;
        }

        for(auto k:mp[(d[i])-'0']){
            s+=k;
            tra(d,s,i+1,ans,mp);
            s.pop_back();
        }
        
    }
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        unordered_map<int,vector<char>>mp;
        mp[2]={'a','b','c'};
        mp[3]={'d','e','f'};
        mp[4]={'g','h','i'};
        mp[5]={'j','k','l'};
        mp[6]={'m','n','o'};
        mp[7]={'p','q','r','s'};
        mp[8]={'t','u','v'};
        mp[9]={'w','x','y','z'};

        vector<string>ans;



        tra(digits,"",0,ans,mp);

        return ans;

        
    }
};