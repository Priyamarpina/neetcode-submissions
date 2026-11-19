class Solution {
public:
    string toHexspeak(string num) {
        string ans;
        long long val=stoll(num);
        string alphabet = "OI23456789ABCDEF";
        while(val){
            int mod= val%16;
            val=val/16;
            if(mod>=2 && mod<=9){
                return "ERROR";
            }
            ans.push_back(alphabet[mod]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
