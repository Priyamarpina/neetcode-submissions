class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int ans=0,curr=0;
        for(int i=0;i<24;i++){
            curr=0;
            for(auto cand:candidates){
                if(cand & (1<<i)){
                    curr++;
                }
            }
            ans=max(ans,curr);
        }

        return ans;
    }
};
