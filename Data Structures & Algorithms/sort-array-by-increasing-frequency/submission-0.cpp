class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto num:nums){
            mp[num]++;
        }
        vector<pair<int,int>> freq;
        for(auto itr=mp.begin();itr!=mp.end();itr++){
            freq.push_back({itr->first,itr->second});
        }
        sort(freq.begin(),freq.end(),[](const pair<int,int> &a,const pair<int,int> &b){
            if(a.second==b.second){
                return a.first>b.first;
            }
            return a.second<b.second;
        });
        vector<int> ans;
        for(int i=0;i<freq.size();i++){
            for(int j=0;j<freq[i].second;j++){
                ans.push_back(freq[i].first);
            }
        }
        //reverse(ans.begin(),ans.end());
        return ans;
    }
};