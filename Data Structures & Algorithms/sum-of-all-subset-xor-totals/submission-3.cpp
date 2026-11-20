class Solution {
public:
    void findSubArrays(vector<int>& nums, int i,int n,int &ans,int currXor){
        if(i==n){
            ans+=currXor;
            return;
        }
        findSubArrays(nums,i+1,n,ans,currXor^(nums[i]));
        findSubArrays(nums,i+1,n,ans,currXor);
        return;
    }
    int subsetXORSum(vector<int>& nums) {
        
        int ans=0;
        int n=nums.size();
        findSubArrays(nums,0,n,ans,0);
        return ans;
    }
};