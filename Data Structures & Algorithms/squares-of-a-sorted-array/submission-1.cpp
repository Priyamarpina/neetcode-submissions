class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;

        int start=0,end=nums.size()-1;
        while(start<=end){
            if(nums[end]*nums[end]>nums[start]*nums[start]){
                ans.push_back(nums[end]*nums[end]);
                end--;
            }else{
                ans.push_back(nums[start]*nums[start]);
                start++;
            }
        }

        reverse(ans.begin(),ans.end());
        return ans;
    }
};