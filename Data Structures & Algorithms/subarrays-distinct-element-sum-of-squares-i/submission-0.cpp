class Solution {
public:
    int countDistinct(vector<int> &nums,int k){
        int n=nums.size();
         int start=0,ans=0;
        while(start+k<=n){
            unordered_set<int> vis;
            for(int i=start;i<start+k;i++){
                vis.insert(nums[i]);
            }
            ans+=(vis.size()*vis.size());
            start++;
        }
        return ans;
        
    }
    int sumCounts(vector<int>& nums) {
        int ans=0;
        for(int i=1;i<=nums.size();i++){
            ans+=countDistinct(nums,i);
        }
        return ans;
    }
};
