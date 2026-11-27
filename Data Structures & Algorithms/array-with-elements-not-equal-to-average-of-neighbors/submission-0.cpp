class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size());
        sort(nums.begin(),nums.end());
        int index=0, nl=0, nr=nums.size()-1;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                ans[i]=nums[nr];
                nr--;
            }else{
                ans[i]=nums[nl];
                nl++;
            }
        }

        return ans;
    }
};
