class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans=numBottles,left=numBottles;
        while(left>=numExchange){
            //cout<<" left: "<<left<<" numExchange: "<<" ans: "<<ans<<" left%numExchange "<<left%numExchange<<" left/numExchange "<<left/numExchange<endl;
            ans+=(left)/numExchange;
            left=(left%numExchange)+(left/numExchange);
            //cout<<" ans "<<ans<<" left "<<endl;
        }
        return ans;
    }
};
