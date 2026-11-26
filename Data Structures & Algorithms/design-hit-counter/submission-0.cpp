class HitCounter {
public:
    HitCounter() {
        
    }
    
    void hit(int timestamp) {
        stamps.push_back(timestamp);
    }
    
    int getHits(int timestamp) {
        while(stamps.size() && timestamp-stamps.front()>=300){
            stamps.pop_front();
        }
        return stamps.size();
    }
    list<int> stamps;
};

/**
 * Your HitCounter object will be instantiated and called as such:
 * HitCounter* obj = new HitCounter();
 * obj->hit(timestamp);
 * int param_2 = obj->getHits(timestamp);
 */
