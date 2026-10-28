class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> letterToWord;
        unordered_map<string,char> wordToLetter;
        string temp;
        int index=0;
        s.push_back(' ');
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                if(letterToWord.find(pattern[index])!=letterToWord.end() && letterToWord[pattern[index]]!=temp){
                    return false;
                }

                if(wordToLetter.find(temp)!=wordToLetter.end() && wordToLetter[temp]!=pattern[index]){
                    return false;
                }
                wordToLetter[temp] = pattern[index];
                letterToWord[pattern[index]] = temp;
                temp.clear();
                index++;
            }else{
                temp.push_back(s[i]);
            }
        }
        return index==pattern.size();
    }
};