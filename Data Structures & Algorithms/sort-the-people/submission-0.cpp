class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[heights[i]]=i;
        }
        vector<string> ans;
        for(auto itr=mp.begin();itr!=mp.end();itr++){
            ans.push_back(names[itr->second]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};