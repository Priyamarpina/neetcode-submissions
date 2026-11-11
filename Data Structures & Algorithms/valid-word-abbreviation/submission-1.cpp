class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int i=0,j=0;
        while(i<word.size() && j<abbr.size()){
            if(word[i]==abbr[j]){
                i++;
                j++;
            }else if(abbr[j]-'0'>0 && abbr[j]<='9'){
                //if()
                int value=0;
                while(abbr[j]-'0'>=0 && abbr[j]<='9' && j<abbr.size()){
                    value=value*10+abbr[j]-'0';
                    j++;
                }
                i=i+value;
            }else{
                return false;
            }
        }
        return i==word.size() && j==abbr.size();
    }
};