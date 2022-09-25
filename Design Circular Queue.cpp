class MyCircularQueue {
public:
    int front=0,rear=0;
    int size=0;
    vector<int>arr;
    MyCircularQueue(int k) {
        // reinitilizing  our vector/queue of size k with default value -1 .
        arr.resize(k, -1);
    }
    
    bool enQueue(int value) {
      // before putting value we are checking is our queue is full or not if it is full so we return false.
        if(isFull()){
            return false;
            
        }
      // if our queue/vector is empty so at start front and rear both are equal .
        if(isEmpty()){
            front=rear=0;
            arr[rear]=value;
            size++;
            return true;
        }
        rear++;
        size++;
        rear=rear%arr.size();
        arr[rear]=value;
        
        return true;
    }
    
    bool deQueue() {
      // before deleting we are checking our vector/queue is empty or not if empty we can't delete any value so return false .
        if(isEmpty()){
            return false;
        }
        arr[front]=-1;
        front++;
        size--;
        front=front%arr.size();
        return true;
    }
    
    int Front() {
        // returning front element of vector/queue
        return arr[front];
    }
    
    int Rear() {
      // returning rear element of vector/queue
        return arr[rear];
    }
    
    bool isEmpty() {
        if(size==0) return true;
        return false;
    }
    
    bool isFull() {
        if(size==arr.size()) return true;
        return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
