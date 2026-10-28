class Solution {
public:
    int findMaxi(int i,int j,vector<vector<int>>& grid){
        int maxi=INT_MIN;
        for(int row=0;row<3;row++){
            for(int col=0;col<3;col++){
                maxi=max(maxi,grid[i+row][j+col]);
            }
        }
        return maxi;
    }
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<int>> ans(n-2,vector<int>(n-2,0));
        for(int i=0;i<n-2;i++){
            for(int j=0;j<n-2;j++){
                ans[i][j]= findMaxi(i,j,grid);
            }
        }
        return ans;
    }
};