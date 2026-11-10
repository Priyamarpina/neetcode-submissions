class Solution {
public:
    int shortestDistance(vector<string>& wordsDict, string word1, string word2) {
        int word1Indices=-1,word2Indices=-1;
        int ans=INT_MAX;
        for(int i=0;i<wordsDict.size();i++){
            if(wordsDict[i]==word1){
                word1Indices=i;
            }

            if(wordsDict[i]==word2){
                word2Indices=i;
            }
            if(word1Indices!=-1 && word2Indices!=-1){
                ans=min(ans,abs(word1Indices-word2Indices));
            }
        }


        return ans;
    }
};
