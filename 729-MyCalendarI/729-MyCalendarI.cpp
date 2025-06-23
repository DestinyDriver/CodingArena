// Last updated: 24/6/2025, 12:44:00 am
class MyCalendar {
public:
    vector<vector<int>>v;

    MyCalendar() {
        
        
    }
    
    bool book(int s, int e) {
        
        for(int i=0;i<v.size();i++){
            int s1=v[i][0];
            int e1=v[i][1];
            if(s1<e&&e1>s)  return false;
        }
        v.push_back({s,e});
        return true;
        
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(startTime,endTime);
 */