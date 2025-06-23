// Last updated: 24/6/2025, 12:45:52 am
class Solution {
public:
    bool isValid(string s) {
        stack<char>ans;

        for(int i=0;i<s.size();i++){
            char q=s[i];
            if(q=='('||q=='['||q=='{') ans.push(q);
            else{
                if(!ans.empty()){
                char l=ans.top();
                ans.pop();
                if((q==')'&&l!='(')||(q==']'&&l!='[')||(q=='}'&&l!='{')) return false;}else return false;
            }
        }

        if(ans.empty())  return true;
        else return false;
        
    }
};