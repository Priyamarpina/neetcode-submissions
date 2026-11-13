class Solution {
public:
    int missingNumber(vector<int>& arr) {

        int n=arr.size();
        int difference = (arr[n-1]-arr[0])/n;
        if(difference==0){
            return arr[0];
        }
        for(int i=1;i<arr.size();i++){
            if(arr[i]-arr[i-1]!=difference){
                return arr[i-1]+difference;
            }
        }
        return -1;
    }
};
