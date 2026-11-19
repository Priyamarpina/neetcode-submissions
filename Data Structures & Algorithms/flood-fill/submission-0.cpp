class Solution {
public:
    bool isValid(int i,int j,int m,int n){
        if(i>=0 && j>=0 && i<m && j<n){
            return true;
        }
        return false;
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m=image.size(), n=image[0].size();
        queue<pair<int,int>> q;
        vector<vector<int>> vis(m,vector<int>(n,0));
        q.push({sr,sc});
        int pickColor=image[sr][sc];
        image[sr][sc]=color;
        vis[sr][sc]=1;
        vector<vector<int>> dir={{0,1},{1,0},{-1,0},{0,-1}};
        while(q.size()){
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            for(int i=0;i<dir.size();i++){
                int newX = x+dir[i][0];
                int newY = y+dir[i][1];
                if(isValid(newX,newY,m,n) && image[newX][newY]==pickColor && !vis[newX][newY]){
                    image[newX][newY]=color;
                    q.push({newX,newY});
                    vis[newX][newY]=1;
                }
            }
        }
        return image;

    }
};