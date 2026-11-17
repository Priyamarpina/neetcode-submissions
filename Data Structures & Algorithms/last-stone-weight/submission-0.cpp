class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> st;
        for(int i=0;i<stones.size();i++){
            st.push(stones[i]);
        }
        while(st.size()>1){
            
            int top1 = st.top();
            st.pop();

            int top2 = st.top();
            st.pop();

            //cout<<top1<<" "<<top2<<endl;
            if(top1==top2){
                continue;
            }else{
                st.push(abs(top1-top2));
            }
        }
        if(st.size()){
            return st.top();
        }
        return 0;
    }
};
