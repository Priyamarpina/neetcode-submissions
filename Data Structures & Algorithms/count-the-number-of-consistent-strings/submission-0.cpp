class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> vis;
        for(int i=0;i<allowed.size();i++){
            vis.insert(allowed[i]);
        }

        int ans=0;
        for(int i=0;i<words.size();i++){
            bool isConsistent = true;
            for(int j=0;j<words[i].size();j++){
                if(vis.find(words[i][j])==vis.end()){
                    isConsistent=false;
                    break;
                }
            }
            if(isConsistent){
                ans++;
            }
        }
        return ans;
    }
};