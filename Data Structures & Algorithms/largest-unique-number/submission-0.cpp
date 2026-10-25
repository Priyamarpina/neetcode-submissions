class Solution {
public:
    int largestUniqueNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int ans = -1;
        for(auto itr=mp.begin();itr!=mp.end();itr++){
            if(itr->second==1){
                ans=max(ans,itr->first);
            }
        }
        return ans;
    }
};
