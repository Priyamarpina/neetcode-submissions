class Solution {
public:
    string convertToTitle(int columnNumber) {
        if(columnNumber==0){
            return "";
        }
        
        string ans;
        while(columnNumber){
            columnNumber=columnNumber-1;
            //cout<<char(columnNumber%26+'A')<<" "<<columnNumber<<endl;
            ans.push_back(char(columnNumber%26+'A'));
            columnNumber=columnNumber/26;
        }

        reverse(ans.begin(),ans.end());
        return ans;
    }
};