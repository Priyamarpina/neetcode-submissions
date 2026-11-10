class Solution {
public:
    int shortestDistance(vector<string>& wordsDict, string word1, string word2) {
        vector<int> word1Indices,word2Indices;
        for(int i=0;i<wordsDict.size();i++){
            if(wordsDict[i]==word1){
                word1Indices.push_back(i);
            }

            if(wordsDict[i]==word2){
                word2Indices.push_back(i);
            }
        }

        int ans=INT_MAX;
        for(int i=0;i<word1Indices.size();i++){
            for(int j=0;j<word2Indices.size();j++){
                ans=min(ans,abs(word1Indices[i]-word2Indices[j]));
            }
        }
        return ans;
    }
};
