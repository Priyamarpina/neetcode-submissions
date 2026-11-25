class LRUCache {
public:
    LRUCache(int capacity) {
        cap=capacity;
    }
    
    int get(int key) {
        //cout<<"GET : "<<key<<endl;
        if(mp.find(key)==mp.end()){
             //cout<<"GET : "<<key<<" -1"<<endl;
            return -1;
        }
        //cout<<"GET : "<<key<<" "<<mp[key]<<endl;
        freq[key]=counter+1;
        counter++;
        return mp[key];
    }
    
    void put(int key, int value) {
       // cout<<"PUT : "<<key<<" "<<value<<endl;
        mp[key]=value;
        freq[key]=counter+1;
        counter++;
        

        if(mp.size()>cap){
            int miniValue,mini=INT_MAX;
            for(auto itr=freq.begin();itr!=freq.end();itr++){
                if(mini>itr->second){
                    mini=itr->second;
                    miniValue=itr->first;
                }
            }
           // cout<<"Erase Value "<<miniValue<<" count "<<mini<<endl;
            mp.erase(miniValue);
            freq.erase(miniValue);
        }
        
    }
    unordered_map<int,int> mp,freq;
    int cap,counter=0;
};
