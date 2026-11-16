class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        vector<int> vis(26,-1);
        int ans=-1;
        for(int i=0;i<s.size();i++){
            if(vis[s[i]-'a']==-1){
                vis[s[i]-'a']=i;
            }else{
                ans = max(ans, i-vis[s[i]-'a']-1);
            }
        }
        return ans;
    }
};