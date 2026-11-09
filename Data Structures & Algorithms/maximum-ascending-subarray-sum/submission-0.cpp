class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int ans=0;
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]>nums[i-1]){
                ans+=nums[i];
            }else if(i==0 || nums[i]<=nums[i-1]){
                ans=nums[i];
            }
            maxi=max(maxi,ans);
        }
        return maxi;
    }
};