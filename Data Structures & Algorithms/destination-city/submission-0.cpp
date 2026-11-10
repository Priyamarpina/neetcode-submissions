class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,string> mp;
        unordered_set<string> vis;
        for(int i=0;i<paths.size();i++){
            mp[paths[i][0]]=paths[i][1];
            vis.insert(paths[i][0]);
        }
        string ans;
        for(auto itr=mp.begin();itr!=mp.end();itr++){
            if(vis.find(itr->second)==vis.end()){
                return itr->second;
            }
        }
        return ans;
    }
};
