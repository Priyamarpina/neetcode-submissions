class Solution {
public:
    int maxNumberOfApples(vector<int>& weights) {
        sort(weights.begin(),weights.end());
        int ans=0,sum=0;
        for(int i=0;i<weights.size();i++){
            sum+=weights[i];
            if(sum<=5000){
                ans++;
            }else{
                break;
            }
        }
        return ans;
    }
};
