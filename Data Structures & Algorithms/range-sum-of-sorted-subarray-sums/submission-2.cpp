class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> sum;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int temp=0;
            for(int j=i;j<n;j++){
                temp=(temp+nums[j])%1000000007;
                sum.push_back(temp);
            }
            
        }

        sort(sum.begin(),sum.end());
        cout<<sum.size()<<" ";
        for(int i=left-1;i<right;i++){
             ans=(ans+sum[i])%1000000007;
            // cout<<i<<" ";
        }
        return ans;
    }
};
