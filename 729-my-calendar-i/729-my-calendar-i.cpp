class MyCalendar {
public:
    multiset<pair<int,int>> b;
    MyCalendar() {
    }
    bool book(int start, int end)
    {
        int book=0;
        b.insert({start,1});
        b.insert({end,-1});
        multiset<pair<int,int>> ::iterator it;
        for (it=b.begin();it!=b.end();it++)
        {
            book=book+it->second;
            if (book>1)
            {
                b.erase(b.find({start,1}));
                b.erase(b.find({end,-1}));
                return false;
            }
        }
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */