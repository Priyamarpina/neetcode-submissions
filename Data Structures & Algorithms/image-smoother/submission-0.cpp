class Solution {
public:
    int getAvg(vector<vector<int>>& img,int row,int col){
        int m=img.size(),n=img[0].size();
        vector<vector<int>> dir={{0,0},{-1,0},{1,0},{0,-1},{0,1},{1,-1},{1,1},{-1,-1},{-1,1}};
        int sum=0,count=0;
        for(int i=0;i<dir.size();i++){
            int newRow=row+dir[i][0];
            int newCol=col+dir[i][1];
            if(newRow>=0 && newRow<m && newCol>=0 && newCol<n){
                sum+=img[newRow][newCol];
                count++;
                //cout<<sum<<" "<<count<<endl;
            }
        }
        return sum/count;
    }
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        
        int m=img.size(),n=img[0].size();
        vector<vector<int>> ans(m,vector<int>(n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans[i][j]=getAvg(img,i,j);
            }
        }

        return ans;
    }
};
