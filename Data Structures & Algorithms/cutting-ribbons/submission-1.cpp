class Solution {
public:
    int getPieces(vector<int> &ribbons,int val){
        int ans=0;
        for(int i=0;i<ribbons.size();i++){
            ans+=ribbons[i]/val;
        }
        return ans;
    }
    int maxLength(vector<int>& ribbons, int k) {
        int mini=INT_MAX,maxi=INT_MIN;
        for(int i=0;i<ribbons.size();i++){
            mini=min(mini,ribbons[i]);
            maxi=max(maxi,ribbons[i]);
        }
        int left=1,right=maxi;
        int ans=0;
        while(left<=right){
            int mid=(left+right)/2;
            int number=getPieces(ribbons,mid);
            if(number>=k){
                left=mid+1;
                ans=max(ans,mid);
            }else{
                right=mid-1;
            }
        }
        return ans;
    }
};
