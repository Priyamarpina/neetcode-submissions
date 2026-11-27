class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        for(int i=0;i<nums.size();i++){
            int curr=nums[i];
            for(int j=i+1;j<nums.size();j++){
                curr+=nums[j];
                if(curr%k==0){
                    return true;
                }
            }
        }
        return false;
    }
};