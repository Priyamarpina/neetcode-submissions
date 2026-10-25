class TwoSum {
public:
    TwoSum() {

    }
    void add(int number) {
        mp[number]++;
    }
    bool find(int value) {
        for(auto itr=mp.begin();itr!=mp.end();itr++){
            int secondValue=value-itr->first;
            if(mp.find(secondValue)!=mp.end() && mp[secondValue]>0){
                if(secondValue == itr->first && mp[secondValue]>1){
                    return true;
                }else if(secondValue != itr->first){
                    return true;
                }
            }
        }
        return false;
    }

    unordered_map<int,int> mp;
};
