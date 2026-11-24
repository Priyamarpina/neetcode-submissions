class Solution {
public:
    long long maximumSumScore(vector<int>& nums) {
        int n=nums.size();
        vector<long long> prefix(n,0),suffix(n,0);
        prefix[0]=nums[0];
        suffix[n-1]=nums[n-1];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+nums[i];
            suffix[n-i-1]=suffix[n-i]+nums[n-i-1];
        }

        long long maxi=LLONG_MIN;
        for(int i=0;i<n;i++){
            maxi=max(maxi,max(prefix[i],suffix[i]));
        }
        return maxi;
    }
};
