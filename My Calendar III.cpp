class MyCalendarThree {
public:
    map<int,int>mapping;
    int maxi=0;
    MyCalendarThree() {
        
    }
    
    int book(int start, int end) {
        int count=0;
        mapping[start]++;
        mapping[end]--;
        for(auto it = mapping.begin();it!=mapping.end();it++){
             count+=it->second;
             maxi=max(maxi,count);
        }
        
           return maxi;
    }
};
