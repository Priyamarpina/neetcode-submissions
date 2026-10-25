class Solution {
public:
    bool isDecomposable(string s) {
        int i=0,j;
        int pairs=0;
        while(i<s.size()){
            j=i+1;
            while(s[i]==s[j] && j<s.size()){
                j++;
            }
            int length= j-i;
            if(length%3==1){
                return false;
            }
            if(length%3==2){
                pairs++;
            }
            i=j;
        }
        return pairs==1;
    }
};
