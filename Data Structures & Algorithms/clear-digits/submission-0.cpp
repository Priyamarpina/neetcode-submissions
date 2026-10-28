class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]-'0'>=0 && s[i]-'0'<=9 && st.size()){
                st.pop();
            }else{
                st.push(s[i]);
            }
        }
        string ans;
        while(st.size()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
