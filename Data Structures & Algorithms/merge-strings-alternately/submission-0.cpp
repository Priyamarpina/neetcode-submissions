class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1=word1.size(),n2=word2.size();
        int s1=0,s2=0;
        string ans;
        while(s1<n1 || s2<n2){
            if(s1<n1){
                ans.push_back(word1[s1]);
                s1++;
            }

            if(s2<n2){
                ans.push_back(word2[s2]);
                s2++;
            }
        }
        return ans;
    }
};