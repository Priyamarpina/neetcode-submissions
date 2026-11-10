class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1){
            return x;
        }
        int low=1, high=x;
        while(low<=high){
            long long mid = (low+high)/2;
            if((long long)mid*mid<=x && (long long)(mid+1)*(mid+1)>x){
                return mid;
            }
            if((long long)mid*mid>x){
                high=mid-1;
            }
            if((long long)mid*mid<x){
                low=mid+1;
            }
        }
        return -1;
    }
};