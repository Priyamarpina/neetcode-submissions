class Solution {
public:
    vector<int> getRow(int rowIndex) {
       int numRows = rowIndex+1;
       vector<vector<int>> dp(numRows);
       dp[0]= {1};
       if(numRows==1){
        return dp[rowIndex];
       }

       dp[1]= {1,1};
       if(numRows==2){
        return dp[rowIndex];
       }
    
       for(int i=2;i<numRows;i++){
            vector<int> temp(i+1,1);
            for(int j=1;j<i;j++){
                temp[j]=dp[i-1][j-1]+dp[i-1][j];
            }
            dp[i]=temp;
       }

       return dp[rowIndex];
    }
};