class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        while(k){
            int max=INT_MIN, index=-1;
            for(int i=0;i<gifts.size();i++){
               
                if(max<gifts[i]){
                    max=gifts[i];
                    index=i;
                }
            }
            k--;
            gifts[index]=sqrt(gifts[index]);
        }
        int sum=0;
        for(int i=0;i<gifts.size();i++){
            sum+=gifts[i];
        }
        return sum;
    }
};