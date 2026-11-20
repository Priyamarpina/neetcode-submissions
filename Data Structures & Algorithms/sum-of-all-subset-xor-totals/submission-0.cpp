class Solution {
public:
    void findSubArrays(vector<int>& nums, int i,int n,vector<vector<int>> &subarrays,vector<int> temp){
        if(i==n){
            if(temp.size()){
                subarrays.push_back(temp);
            }
            return;
        }
        temp.push_back(nums[i]);
        findSubArrays(nums,i+1,n,subarrays,temp);
        temp.pop_back();
        findSubArrays(nums,i+1,n,subarrays,temp);
        return;
    }
    int subsetXORSum(vector<int>& nums) {
        
        vector<vector<int>> subarrays;
        int n=nums.size();
        vector<int> temp;
        findSubArrays(nums,0,n,subarrays,temp);
        int sum=0;
        for(int i=0;i<subarrays.size();i++){
            int currXor=subarrays[i][0];
            for(int j=1;j<subarrays[i].size();j++){
                currXor^=(subarrays[i][j]);
            }
            sum+=currXor;
        }
        return sum;
    }
};