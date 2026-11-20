class Solution {
public:
    void findSubArrays(vector<int>& nums, int i,int n,int &ans,vector<int> &temp){
        if(i==n){
            if(temp.size()){
                int currXor=temp[0];
                for(int j=1;j<temp.size();j++){
                    currXor^=(temp[j]);
                }
                ans+=currXor;
            }
            return;
        }
        temp.push_back(nums[i]);
        findSubArrays(nums,i+1,n,ans,temp);
        temp.pop_back();
        findSubArrays(nums,i+1,n,ans,temp);
        return;
    }
    int subsetXORSum(vector<int>& nums) {
        
        int ans=0;
        int n=nums.size();
        vector<int> temp;
        findSubArrays(nums,0,n,ans,temp);
        return ans;
    }
};