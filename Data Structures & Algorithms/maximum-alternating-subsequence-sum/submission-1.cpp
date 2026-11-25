class Solution {
public:
    long long dfs(vector<int>& nums,int index,int pos,vector<vector<long long>> &dp){
        if(index==nums.size()){
            return 0;
        }

        if(dp[index][pos]!=LLONG_MIN){
            return dp[index][pos];
        }
        int isNegative=1;
        if(pos){
            isNegative=-1;
        }
        long long include=(isNegative*nums[index])+dfs(nums,index+1,!pos,dp);
        long long exclude=dfs(nums,index+1,pos,dp);
        dp[index][pos]= max(include,exclude);
        //cout<<index<<" "<<pos<<" "<<dp[index][pos]<<endl;
        return dp[index][pos];
    }
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<long long>> dp(n,vector<long long>(2,LLONG_MIN));
        return dfs(nums,0,0,dp);
    }
};
