// Last updated: 24/6/2025, 12:44:29 am
class SummaryRanges {
public:
    set<int>ans;
    SummaryRanges() {
        ans.clear();
    }
    
    void addNum(int value) {
       ans.insert(value);
    }
    
    vector<vector<int>> getIntervals() {
        if(ans.size()==0)   return {};
        
        vector<vector<int>>v;
        // sort(ans.begin(),ans.end());

        long  st=*ans.begin();
        long end=st+1;

        auto it=ans.begin();
        it++;

        for(;it!=ans.end();it++){
            if(end!=*it){
                v.push_back({(int)st,(int)end-1});
                st=*it;end=st+1;

            }else{
                end++;

            }
        }
        v.push_back({(int)st,(int)end-1});
        return v;


    }
};


// 1 2 3        4 5

// 1-3 || 4-5


/**
 * Your SummaryRanges object will be instantiated and called as such:
 * SummaryRanges* obj = new SummaryRanges();
 * obj->addNum(value);
 * vector<vector<int>> param_2 = obj->getIntervals();
 */