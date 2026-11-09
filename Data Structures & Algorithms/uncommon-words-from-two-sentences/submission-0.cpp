class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int> mp;
        s1.push_back(' ');
        s2.push_back(' ');
        int start=0;
        for(int i=0;i<s1.size();i++){
            if(s1[i]==' '){
                mp[s1.substr(start,i-start)]++;
                start=i+1;
            }
        }
        
        start=0;
        for(int i=0;i<s2.size();i++){
            if(s2[i]==' '){
                mp[s2.substr(start,i-start)]++;
                start=i+1;
            }
        }

        vector<string> ans;
        for(auto itr=mp.begin();itr!=mp.end();itr++){
            if(mp[itr->first]==1){
                ans.push_back(itr->first);
            }
        }

        return ans;
    }
};
