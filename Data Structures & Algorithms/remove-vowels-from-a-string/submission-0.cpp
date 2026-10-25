class Solution {
public:
    string removeVowels(string s) {
        int  j=0;
        unordered_set<char> mp = {'a', 'e','i','o','u'};
        string ans;
        while(j<s.size()){
            while(j<s.size() && mp.find(s[j])!=mp.end()){
                j++;
            }
            if(j<s.size()){
                ans.push_back(s[j]);
            }
            j++;
        }
        return ans;
    }
};
