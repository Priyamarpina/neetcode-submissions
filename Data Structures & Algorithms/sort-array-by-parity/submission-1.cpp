class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int even=0, odd=nums.size()-1;
        while(even<odd){
            while(even<nums.size() && nums[even]%2==0){
                even++;
            }

            while(odd>=0 && nums[odd]%2==1){
                odd--;
            }

            if(even<odd && odd>=0 && nums[odd]%2==0 && even<nums.size() && nums[even]%2==1){
                swap(nums[odd],nums[even]);
            }
            even++;
            odd--;
        }
        return nums;
    }
};