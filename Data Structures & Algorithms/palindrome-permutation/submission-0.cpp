class Solution {
public:
    bool canPermutePalindrome(string s) {
        vector<int> mp(26,0);
        for(int i=0;i<s.size();i++){
            mp[s[i]-'a']++;
        }

        int oddCount=0;
        for(int i=0;i<26;i++){
            if(mp[i]%2){
                oddCount++;
            }
        }
        return oddCount<=1;
    }
};
