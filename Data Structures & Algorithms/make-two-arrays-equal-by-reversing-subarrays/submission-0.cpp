class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        if(target.size()!=arr.size()){
            return false;
        }
        unordered_map<int,int> tn;
        for(int i=0;i<target.size();i++){
            tn[target[i]]++;
        }

        for(int i=0;i<target.size();i++){
           if(tn.find(arr[i])==tn.end() || tn[arr[i]]<=0){
            return false;
           }
           tn[arr[i]]--;
        }
        return true;
    }
};
