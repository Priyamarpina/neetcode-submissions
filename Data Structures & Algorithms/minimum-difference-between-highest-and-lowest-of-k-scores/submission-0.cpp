class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        if(nums.size()==k){
            return nums[k-1]-nums[0];
        }
        int ans = INT_MAX;
        // 1, 2, 3, 3, 5, 6
        for(int i=k-1;i<nums.size();i++){
            ans= min(ans, nums[i]-nums[i-k+1]);
        }
        return ans;
    }
};