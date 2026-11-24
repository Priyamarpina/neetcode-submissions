class Solution {
public:
    vector<int> largestSubarray(vector<int>& nums, int k) {
        int maxi=0,index=0;
        for(int i=0;i<nums.size();i++){
            if(i+k<=nums.size()){
                if(maxi<nums[i]){
                    maxi=nums[i];
                    index=i;
                }else if(maxi==nums[i]){
                    int curr=i;
                    int temp=index;
                    while(nums[curr]!=nums[temp] && curr<i+k){
                        curr++;
                        temp++;
                    }
                    if(curr<i+k && nums[curr]>nums[temp]){
                        maxi=nums[i];
                        index=i;
                    }
                }
            }else{
                break;
            }
        }
        vector<int> ans;
        for(int i=index;i<index+k;i++){
            ans.push_back(nums[i]);
        }
        return ans;
    }
};
