// Last updated: 25/6/2025, 11:44:45 am
class Solution {
public:
    bool isRectangleCover(vector<vector<int>>& rect) {
        map<int,int>mpx,mpy;
        long long ar=0;

        
        // set<pair<int,int>>s;
        map<pair<int,int>,int>s;

        for(int i=0;i<rect.size();i++){
            int x1=rect[i][0];
            int x2=rect[i][2];
            int y1=rect[i][1];
            int y2=rect[i][3];
            
            s[{x1,y1}]++;
            s[{x1,y2}]++;
            s[{x2,y1}]++;
            s[{x2,y2}]++;

            ar+=1LL*(x2-x1)*(y2-y1);

            // // int ct=s.size();
            

            // if(s.count({x1,y1}))    s.erase({x1,y1});
            // else    s[{x1,y1}]++;

            // if(s.count({x1,y2}))    s.erase({x1,y2});
            // else    s.insert({x1,y2});

            // if(s.count({x2,y1}))    s.erase({x2,y1});
            // else    s.insert({x2,y1});

            // if(s.count({x2,y2}))    s.erase({x2,y2});
            // else    s.insert({x2,y2});
            
            
        }
        int ct=0;
        long long  x1=INT_MAX,x2=INT_MIN,y1=INT_MAX,y2=INT_MIN;

        for(auto i:s){
            if(i.second%2==1){
                ct++;
                x1=min(x1,1LL*i.first.first);
                x2=max(x2,1LL*i.first.first);
                y1=min(y1,1LL*i.first.second);
                y2=max(y2,1LL*i.first.second);

            }
        }

        if(ct!=4)   return false;

        return ar==1LL*(x2-x1)*(y2-y1);
    }
};