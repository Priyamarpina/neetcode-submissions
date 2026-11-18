class Solution {
public:
    int arrangeCoins(int n) {
        int index=1;
        int ans=0;
        while(n-index>=0){
            n=n-index;
            ans++;
            index++;
        }
        return ans;
    }
};