class CustomStack {
public:
    vector<int>st;
    int top = -1;
    int size ;
    CustomStack(int maxSize) {
        st  = vector<int>(maxSize);
        size = maxSize;
    }
    
    void push(int x) {
        if(top >= size-1) return;
        top++;
        //cout<<top<<endl;
        st[top] = x;
        return;
    }
    
    int pop() {
        if(top==-1) return -1;
        int x = st[top];
        top--;
        return x;
    }
    
    void increment(int k, int val) {
        for(int i =0 ;i<k && i<=top;i++){
            st[i] +=val;
        }

        return;
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
