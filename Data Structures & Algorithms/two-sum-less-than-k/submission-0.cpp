class Solution {
public:
    int twoSumLessThanK(vector<int>& nums, int k) {
        int i=0,j=1;
        int n=nums.size();
        int ans = INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int temp=nums[i]+nums[j];
                if(temp<k){
                    ans=max(ans,temp);
                }
            }
        } 
        if(ans==INT_MIN){
            return -1;
        }
        return ans;
    }
};
