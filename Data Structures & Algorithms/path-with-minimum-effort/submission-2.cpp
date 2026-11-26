class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>> pq;
        pq.push({0,0,0});
        int m=heights.size(),n=heights[0].size();
        vector<vector<int>> vis(m,vector<int>(n,INT_MAX));
        vector<vector<int>> dir={{0,1},{1,0},{0,-1},{-1,0}};
        vis[0][0]=0;
        while(pq.size()){
            int d=pq.top()[0];
            int x=pq.top()[1];
            int y=pq.top()[2];
            pq.pop();
            //cout<<d<<" "<<x<<" "<<y<<endl;
            if(x==m-1 && y==n-1){
                return d;
            }
            for(int i=0;i<4;i++){
                int row=x+dir[i][0];
                int col=y+dir[i][1];
                if(!(row>=0 && col>=0 && row<m && col<n)){
                    continue;
                }
                 int newD=max(d,abs(heights[x][y]-heights[row][col]));
                if(vis[row][col]>newD){
                     pq.push({newD,row,col});
                     vis[row][col]=newD;
                }
            }
        }
        return -1;
    }
};