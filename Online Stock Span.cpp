class StockSpanner {
public:
    stack<pair<int,int>> sk;
    StockSpanner() {    }
    
    int next(int price) {
	
        int ct = 1;
        while(sk.size() and sk.top().first <= price)    // as shown in during Dry run on sample input
				ct+=sk.top().second , sk.pop();            // we add count of poped element's count
				
        sk.push({price , ct});
        return ct;
    }
};
