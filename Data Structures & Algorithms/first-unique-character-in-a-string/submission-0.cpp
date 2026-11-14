class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> vis(26,0);
        for(int i=0;i<s.size();i++){
            vis[s[i]-'a']++;
        }
        unordered_set<char> st;
        for(int i=0;i<26;i++){
            if(vis[i]==1){
                st.insert(char(i+'a'));
            }
        }

        for(int i=0;i<s.size();i++){
            if(st.find(s[i])!=st.end()){
                return i;
            }
        }
        return -1;
    }
};