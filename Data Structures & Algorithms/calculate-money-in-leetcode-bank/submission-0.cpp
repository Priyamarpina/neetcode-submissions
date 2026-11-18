class Solution {
public:
    int totalMoney(int n) {
        int sum=0;
        int monday=0;
        int curr=0;
        for(int i=1;i<=n;i++){
            if((i-1)%7==0){
                monday++;
                curr=monday;
            }
            sum+=curr;
            curr++;
        }
        return sum;
    }
};
