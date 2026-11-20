class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> count(26,0);
        for(int i=0;i<chars.size();i++){
            count[chars[i]-'a']++;
        }
        int ans=0;
        for(int i=0;i<words.size();i++){
            int isGood=1;
            vector<int> temp(26,0);
            for(int j=0;j<words[i].size();j++){
                temp[words[i][j]-'a']++;
            }

            for(int j=0;j<26;j++){
                if(temp[j]>count[j]){
                    isGood=0;
                    break;
                }
            }
            if(isGood){
                //cout<<words[i]<<endl;
                ans+=words[i].size();
            }
            
        }
        return ans;
    }
};