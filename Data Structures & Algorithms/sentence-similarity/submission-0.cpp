class Solution {
public:
    bool areSentencesSimilar(vector<string>& sentence1, vector<string>& sentence2, vector<vector<string>>& similarPairs) {
        if(sentence1.size()!=sentence2.size()){
            return false;
        }

        for(int i=0;i<sentence1.size();i++){
            if(sentence1[i]==sentence2[i] || isSimilar(sentence1[i],sentence2[i],similarPairs)){
                continue;
            }else{
                return false;
            }
        }
        return true;
    }

    bool isSimilar(string word1, string word2,vector<vector<string>>& similarPairs){
        for(int i=0;i<similarPairs.size();i++){
            if(similarPairs[i][0]==word1 && similarPairs[i][1]==word2){
                return true;
            }else if(similarPairs[i][0]==word2 && similarPairs[i][1]==word1){
                return true;
            }
        }
        return false;
    }
};
