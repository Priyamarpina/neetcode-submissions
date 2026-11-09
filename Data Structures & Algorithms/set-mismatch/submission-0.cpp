class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans(2);
        unordered_set<int> mp;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i])!=mp.end()){
                ans[0]=nums[i];
            }
            mp.insert(nums[i]);
        }

        for(int i=1;i<=nums.size();i++){
            if(mp.find(i)==mp.end()){
                ans[1]=i;
            }
        }
        return ans;
    }
};