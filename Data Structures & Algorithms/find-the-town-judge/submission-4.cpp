class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> vis(n+1,0);
        vis[0]=INT_MAX;
        for(int i=0;i<trust.size();i++){
            vis[trust[i][0]]=INT_MAX;
        }

        for(int i=0;i<trust.size();i++){
            if(vis[trust[i][1]]!=INT_MAX){
                vis[trust[i][1]]++;
            }
        }
        for(int i=1;i<=n;i++){
            if(vis[i]==n-1){
                return i;
            }
        }
        return -1;
    }
};