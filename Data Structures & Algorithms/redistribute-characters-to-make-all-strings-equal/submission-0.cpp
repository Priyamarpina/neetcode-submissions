class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int n=words.size();
        vector<int> count(26,0);
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words[i].size();j++){
                count[words[i][j]-'a']++;
            }
        }
        for(int i=0;i<26;i++){
            if(count[i]%n!=0){
                return false;
            }
        }
        return true;
    }
};