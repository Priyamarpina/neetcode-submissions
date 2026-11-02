class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int ans=1, des=1,asc=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                des=1;
                asc=1;
            }else if(nums[i]>nums[i-1]){
                asc++;
                des=1;
            }else{
                des++;
                asc=1;
            }
            ans=max(ans,max(asc,des));
        }
        return ans;
    }
};