class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n=pref.size();
        int ans=0;
        for(auto word:words){
            if(word.size()<n){
                continue;
            }
            int isPrefix=1;
           // cout<<word" "<<<<endl;
            for(int i=0;i<pref.size();i++){
                if(word[i]!=pref[i]){
                    isPrefix=0;
                    break;
                }
            }
            ans+=isPrefix;
        }
        return ans;
    }
};