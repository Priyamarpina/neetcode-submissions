class MyHashSet {
public:
    MyHashSet() {
        vis=vector<int>(10000001,0);
    }
    
    void add(int key) {
        vis[key]=1;
    }
    
    void remove(int key) {
        vis[key]=0;
    }
    
    bool contains(int key) {
        return vis[key];
    }
    vector<int> vis;
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */