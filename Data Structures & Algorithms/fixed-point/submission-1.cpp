class Solution {
public:
    int fixedPoint(vector<int>& arr) {
        int left=0, right=arr.size()-1;
        int ans=INT_MAX;
        while(left<=right){
            int mid=(left+right)/2;
            if(arr[mid]==mid){
                ans=min(ans,mid);
            }
            if(arr[mid]>=mid){
                right=mid-1;
            }else{
                left=mid+1;
            }
        }
        if(ans==INT_MAX){
            return -1;
        }
        return ans;
    }
};
