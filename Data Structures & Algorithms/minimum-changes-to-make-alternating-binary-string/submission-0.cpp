class Solution {
public:
    int minOperations(string s) {
        int startWithZeroIssues=0,startWithOneIssues=0;
        
        for(int i=0;i<s.size();i++){
            //startWithZeroIssues
            if(i%2==0 && s[i]-'0'!=0){
                startWithZeroIssues++;
            }
            if(i%2==1 && s[i]-'0'!=1){
                startWithZeroIssues++;
            }

            //startWithOneIssues
            if(i%2==0 && s[i]-'0'!=1){
                startWithOneIssues++;
            }
            if(i%2==1 && s[i]-'0'!=0){
                startWithOneIssues++;
            }
        }

        return min(startWithZeroIssues,startWithOneIssues);
    }
};