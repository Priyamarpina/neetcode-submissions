class Solution {
public:
    int calculateTime(string keyboard, string word) {
        unordered_map<char,int> mp;
        for(int i=0;i<keyboard.size();i++){
            mp[keyboard[i]]=i;
        }
        int ans=0;
        if(word.empty()){
            return ans;
        }
        
        ans = mp[word[0]];
        for(int i=1;i<word.size();i++){
            ans+= abs(mp[word[i-1]]-mp[word[i]]); 
        }
        return ans;
    }
};
