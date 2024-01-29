class MyQueue {
public:
    stack<int>s;
      stack<int>s2;
    MyQueue() {
      

    }
    
    void push(int x) {
       while(!s.empty()){
           s2.push(s.top());
           s.pop();
       }
       s.push(x);
       while(!s2.empty()){
           s.push(s2.top());
           s2.pop();
       }
    }
    
    int pop() {
        int x=s.top();
        s.pop();
        return x;
        
    }
    
    int peek() {
        int x=s.top();
        return x;
    }
    
    bool empty() {
        if(s.empty()) return true;
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
