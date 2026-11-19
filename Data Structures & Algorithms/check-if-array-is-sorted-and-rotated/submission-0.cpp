class Solution {
public:
    bool check(vector<int>& nums) {
        int k=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<nums[i-1]){
                k=i;
            }
        }
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        reverse(nums.begin(),nums.end());

        for(int i=1;i<nums.size();i++){
            if(nums[i-1]>nums[i]){
                return false;
            }
        }
        return true;
    }
};