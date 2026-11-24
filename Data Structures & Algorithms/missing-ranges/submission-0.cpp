class Solution {
public:
    vector<vector<int>> findMissingRanges(vector<int>& nums, int lower, int upper) {
        vector<vector<int>> ans;
        int n=nums.size();
        if(n==0){
            return {{lower,upper}};
        }
        if(lower<nums[0]){
            ans.push_back({lower,nums[0]-1});
        }
        for(int i=1;i<n;i++){
            if(nums[i]-nums[i-1]==1){
                continue;
            }
            ans.push_back({nums[i-1]+1,nums[i]-1});
        }

        if(upper>nums[n-1]){
            ans.push_back({nums[n-1]+1,upper});
        }
        return ans;
    }
};
