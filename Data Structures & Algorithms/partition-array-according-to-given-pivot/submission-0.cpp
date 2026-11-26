class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int smaller=0,bigger=0,equal=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==pivot){
                equal++;
            }else if(nums[i]>pivot){
                bigger++;
            }else{
                smaller++;
            }
        }

        vector<int> ans(nums.size());
        int smallerIndex=0,biggerIndex=smaller+equal,equalIndex=smaller;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==pivot){
                ans[equalIndex]=nums[i];
                equalIndex++;
            }else if(nums[i]>pivot){
                ans[biggerIndex]=nums[i];
                biggerIndex++;
            }else{
                ans[smallerIndex]=nums[i];
                smallerIndex++;
            }
            // cout<<"After each swap : ";
            // for(auto num:nums){
            //     cout<<num<<" ";
            // }
            // cout<<endl;
        }
        return ans;
    }
};
