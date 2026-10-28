class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<pair<int,int>> st;

        for(int i=0;i<prices.size();i++){
            while(st.size() && st.top().first>=prices[i]){
                int value=st.top().first;
                int index=st.top().second;
                st.pop();
                prices[index]=value-prices[i];
            }
            st.push({prices[i],i});
        }
        while(st.size()){
            int value=st.top().first;
            int index=st.top().second;
            st.pop();
            prices[index]=value;
        }

        return prices;
    }
};
