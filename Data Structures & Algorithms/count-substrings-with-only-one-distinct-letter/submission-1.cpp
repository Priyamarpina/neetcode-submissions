class Solution {
public:
    int countLetters(string s) {
        int cont=1;
        vector<int> dp(s.size()+1);
        dp[0]=0;
        dp[1]=1;
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1]){
                cont++;
                //cout<<i<<" "<<cont<<" "<<i-cont+1<<endl;
                dp[i+1] = dp[i-cont+1] + (cont*(cont+1))/2;
            }else{
                dp[i+1] = dp[i] + 1;
                cont=1;
            }
           // cout<<s[i]<<" "<<i<<" "<<dp[i+1]<<" "<<cont<<endl;
        }
        return dp[s.size()];
    }
};
