class Solution {
public:
    bool helper(string s, string t){
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char,char> mp;
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])!=mp.end() && mp[s[i]]!=t[i]){
                return false;
            }
            mp[s[i]]=t[i];
        }
        return true;
    }
    bool isIsomorphic(string s, string t) {
        return helper(s,t) && helper(t,s);
    }
};