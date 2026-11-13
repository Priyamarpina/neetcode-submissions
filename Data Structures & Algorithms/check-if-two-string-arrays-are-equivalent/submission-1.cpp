class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string sentence1,sentence2;
        for(int i=0;i<word1.size();i++){
            sentence1+=word1[i];
        }

        for(int i=0;i<word2.size();i++){
            sentence2+=word2[i];
        }
        return sentence1==sentence2;
    }
};
