class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long n=nums.size(),l=0,r=0,sum=0,ans=0;
        unordered_map<int,int> mp;
        while(r-l<k){
            mp[nums[r]]++; 
            sum+=nums[r];
            r++;
        }
        while(r<nums.size()){
            if(r-l==k && mp.size()==k){
                ans=max(ans,sum);
            }

            sum+=nums[r];
            mp[nums[r]]++;

            sum-=nums[l];
            if(mp[nums[l]]==1){
                mp.erase(nums[l]);
            }else{
                mp[nums[l]]--;
            }
            l++;
            r++;
        }
        if(r-l==k && mp.size()==k){
            ans=max(ans,sum);
        }
        return ans;
    }
};
