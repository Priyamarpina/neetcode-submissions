class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n=colors.size();
        stack<pair<char,int>> st;
        int ans=0;
        for(int i=0;i<n;i++){
            if(st.size() && st.top().first==colors[i]){
                char color=colors[i];
                int value=st.top().second;
                st.pop();
                ans+=min(value,neededTime[i]);
                st.push({colors[i],max(value,neededTime[i])});
            }else{
                st.push({colors[i],neededTime[i]});
            }
        }
        return ans;
    }
};
