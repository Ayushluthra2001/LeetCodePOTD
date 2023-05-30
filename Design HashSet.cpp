class MyHashSet {
public:
map<int,int>mapping;
    MyHashSet() {
        
    }
    
    void add(int key) {
        mapping[key]++;
    }
    
    void remove(int key) {
        
        mapping.erase(key);
    
    }
    
    bool contains(int key) {
        if(mapping[key]) return true;
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
