class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int mini1=INT_MAX,mini2=INT_MAX;
        int n=prices.size();
        for(int i=0;i<n;i++){
            if(mini1>prices[i]){
                mini2=mini1;
                mini1=prices[i];
            }else if(mini2>prices[i]){
                mini2=prices[i];
            }
        }
        cout<<mini1<<" "<<mini2<<endl;
        int total=mini1+mini2;
        if(total<=money){
            return money-total;
        }
        return money;
    }
};