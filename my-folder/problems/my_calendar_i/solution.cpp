class MyCalendar {
public:
    list<pair<int,int>> li;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        for(auto i : li){
            if(start < i.second && end > i.first){
                return false;
            }
        }
        pair<int,int> p;
        p.first = start;
        p.second = end;
        li.push_back(p);
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */