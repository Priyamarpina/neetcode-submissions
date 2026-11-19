class Solution {
public:
    int getUpperLimit(vector<int>& nums, int target){
        int left=0, right=nums.size()-1;
        int ans=-1;
        while(left<=right){
            int mid=(left+right)/2;
            if(nums[mid]>target){
                right=mid-1;
            }else{
                ans=mid;
                left=mid+1;
            }
        }
        return ans;
    }

    int getLowerLimit(vector<int>& nums, int target){
        int left=0, right=nums.size()-1;
        int ans=-1;
        while(left<=right){
            int mid=(left+right)/2;
            if(nums[mid]>=target){
                right=mid-1;
                ans=mid;
            }else{
                left=mid+1;
            }
        }
        return ans;
    }
    bool isMajorityElement(vector<int>& nums, int target) {
        int upper=getUpperLimit(nums,target);

        int lower=getLowerLimit(nums,target);
        if(upper==-1 || lower==-1){
            return false;
        }
        return (upper-lower+1)>(nums.size()/2);
    }
};
