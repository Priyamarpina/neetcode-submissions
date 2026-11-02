class Solution {
public:
    bool canBallonBeFormed(map<char,int> &letters){
        if(letters['b']>0 && letters['a']>0 && letters['l']>=2 && letters['o']>=2 && letters['n']>0){
            letters['b']--;
            letters['a']--;
            letters['l']--;
            letters['l']--;
            letters['o']--;
            letters['o']--;
            letters['n']--;
            return true;
        }
        return false;
    }
    int maxNumberOfBalloons(string text) {
        int count=0;
        map<char,int> letters;
        for(int i=0;i<text.size();i++){
            letters[text[i]]++;
        }
        while(canBallonBeFormed(letters)){
            count++;
        }
        return count;
    }
};