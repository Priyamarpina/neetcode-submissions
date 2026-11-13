class Solution {
public:
    int minLength(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            st.push(s[i]);
            if(st.size()>=2){
                char first=st.top();
                st.pop();
                char second= st.top();
                st.pop();
                if((first=='B' && second=='A') || (first=='D' && second=='C')){
                    continue;
                }else{
                    st.push(second);
                    st.push(first);
                }
            }
        }
        return st.size();
    }
};
