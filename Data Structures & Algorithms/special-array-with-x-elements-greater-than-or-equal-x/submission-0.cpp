class Solution {
public:
    int specialArray(vector<int>& nums) {
        int left=0,right=nums.size();
        while(left<=right){
            int mid=(left+right)/2;
            int count=0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]>=mid){
                    count++;
                }
            }
            if(count==mid){
                return mid;
            }
            if(count>mid){
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
        return -1;
    }
};