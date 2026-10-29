class Solution {
public:
    string largestGoodInteger(string num) {
        string ans;
        for(int i=2;i<num.size();i++){
            if(num[i-1]==num[i] && num[i-2]==num[i]){
                // cout<<num[i-2]<<num[i-1]<<num[i]<<endl;
                // cout<<num[i-2]+num[i-1]+num[i]<<endl;
                // cout<<num[i-1]<<num[i]<<endl;
                // cout<<num[i-2]<<num[i]<<endl;
                if(ans.size() && ans[0]-'0'<num[i]-'0'){
                    ans.clear();
                    ans.push_back(num[i-2]);
                    ans.push_back(num[i-1]);
                    ans.push_back(num[i]);
                }else if(ans.empty()){
                    ans.push_back(num[i-2]);
                    ans.push_back(num[i-1]);
                    ans.push_back(num[i]);
                }
            }
        }
        return ans;
    }
};