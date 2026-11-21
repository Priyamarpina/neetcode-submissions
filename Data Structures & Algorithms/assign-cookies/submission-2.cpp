class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.begin(),s.end(),greater<int>());
        sort(g.begin(),g.end(),greater<int>());
        int gi=0,si=0;
        int ans=0;
        while(gi<g.size() && si<s.size()){
            if(g[gi]<=s[si]){
                si++;
                ans++;
            }
            gi++;
        }
        return ans;
    }
};