class Solution {
public:
    bool isSmallerThanBoth(vector<int>& arr,int i){
        if(arr[i]<arr[i-1] && arr[i]<arr[i+1]){
            return true;
        }
        return false;
    }

    bool isLargerThanBoth(vector<int>& arr,int i){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            return true;
        }
        return false;
    }

    vector<int> transformArray(vector<int>& arr) {
        vector<int> next = arr;
        bool changed=false;
        for(int i=1;i<arr.size()-1;i++){
            if(isSmallerThanBoth(arr,i)){
                next[i]++;
                changed= true;
            }else if(isLargerThanBoth(arr,i)){
                next[i]--;
                changed= true;
            }
        }

        if(changed == false){
            return arr;
        }
        return transformArray(next);
    }
};
