class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if(grid[0][0]!=0){
            return -1;
        }
        
        int n=grid.size();
        int ans=INT_MAX;

        queue<vector<int>> q;
        q.push({0,0,1});

        vector<vector<int>> dir={{0,1},{1,0},{0,-1},{-1,0},{-1,-1},{-1,1},{1,-1},{1,1}};
        vector<vector<int>> vis(n,vector<int>(n,0));
        while(q.size()){
            vector<int> top=q.front();
            q.pop();
            int x=top[0];
            int y=top[1];
            int d=top[2];
            if(x==n-1 && y==n-1){
                ans=min(ans,d);
            }
            for(int i=0;i<dir.size();i++){
                int row=x+dir[i][0];
                int col=y+dir[i][1];
                if(row>=0 && col>=0 && row<n && col<n && !vis[row][col] && grid[row][col]==0){
                    vis[row][col]=1;
                    q.push({row,col,d+1});
                }
            }
        }

        if(ans==INT_MAX){
            return -1;
        }
        return ans;
    }
};