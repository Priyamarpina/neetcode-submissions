class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> vis(26,0);
        int n=words.size();

       for(int j=0;j<words[0].size();j++){
            vis[words[0][j]-'a']++;
        }

        for(int i=1;i<n;i++){
            vector<int> temp(26,0);
            for(int j=0;j<words[i].size();j++){
                temp[words[i][j]-'a']++;
            }
            for(int j=0;j<26;j++){
                vis[j]=min(temp[j],vis[j]);
            }
        }
         vector<string> ans;
        for(int j=0;j<26;j++){
            for(int k=0;k<vis[j];k++){
                string temp;
                temp.push_back(char(j+'a'));
                ans.push_back(temp);
            }
        }
        return ans;
       
    }
};