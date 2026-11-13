class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int value, score=0; 
        for(int i=0;i<nums.size();i++){
            if(score==0){
                value=nums[i];
                score=1;
            }else if(value==nums[i]){
                score++;
            }else{
                score--;
            }
        }
        return value;
    }
};