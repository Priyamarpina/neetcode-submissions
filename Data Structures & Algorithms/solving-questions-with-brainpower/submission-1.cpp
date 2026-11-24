class Solution {
public:
    long long helper(vector<vector<int>>& questions,int index, vector<long long> &dp){
        if(index>=questions.size()){
            return 0;
        }
        if(dp[index]!=0){
            return dp[index];
        }
        int points=questions[index][0],brainpower=questions[index][1];
        long long include = points + helper(questions,index+brainpower+1,dp);
        long long exclude = helper(questions,index+1,dp);
        dp[index] = max(include,exclude);                       
        return dp[index];
    }
    long long mostPoints(vector<vector<int>>& questions) {
        vector<long long> dp(questions.size(),0);
        return helper(questions,0,dp);
    }
};
