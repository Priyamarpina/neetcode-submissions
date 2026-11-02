class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int countOnes=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                countOnes++;
            }
        }
        int n=s.size();
        s[n-1]='1';
        countOnes--;
        for(int i=0;i<n-1;i++){
            if(countOnes){
                countOnes--;
                s[i]='1';
            }else{
                s[i]='0';
            }
        }
        return s;
    }
};