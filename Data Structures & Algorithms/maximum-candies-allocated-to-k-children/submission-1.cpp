class Solution {
public:
    long long getEqualNumber(vector<int>& candies,int val){
        long long ans=0;
        for(auto cand:candies){
            ans+=cand/val;
        }
       // cout<<"divisor: "<<val<<" ANs: "<<ans<<endl;
        return ans;
    }
    int maximumCandies(vector<int>& candies, long long k) {
        int maxi=0;
        for(auto cand:candies){
            maxi=max(maxi,cand);
        }
        long long left=1,right=maxi,ans=0;
        while(left<=right){
            long long mid=(left+right)/2;
            long long equal=getEqualNumber(candies,mid);
            if(equal>=k){
                ans=max(ans,mid);
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
        return ans;
    }
};
