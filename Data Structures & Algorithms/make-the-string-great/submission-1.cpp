class Solution {
public:
    bool isOpposite(char a, char b){
        if(a!=b && (tolower(a)==b || tolower(b) == a)){
            return true;
        }
        return false;
    }
    string makeGood(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(st.size() && isOpposite(st.top(),s[i])){
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
