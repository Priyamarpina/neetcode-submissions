class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        if(grid.empty()){
            return {};
        }
        vector<int> flatend;
        int m=grid.size(),n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                flatend.push_back(grid[i][j]);
            }
        }
        int t=flatend.size();
        k=k%t;
        reverse(flatend.begin(),flatend.begin()+t-k);
        reverse(flatend.begin()+t-k,flatend.end());
        reverse(flatend.begin(),flatend.end());

        int index=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                grid[i][j]=flatend[index];
                index++;
            }
        }
        return grid;
    }
};
