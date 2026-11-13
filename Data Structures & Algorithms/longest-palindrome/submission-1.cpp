class Solution {
public:
    int longestPalindrome(string s) {
        int ans =0;
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            if(mp[s[i]]%2==0){
                ans+=2;
            }
        }
        
        for(auto itr=mp.begin();itr!=mp.end();itr++){
            if(itr->second%2==1){
                ans+=1;
                break;
            }
        }
        return ans;
    }
};