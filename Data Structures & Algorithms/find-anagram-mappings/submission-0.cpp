class Solution {
public:
    vector<int> anagramMappings(vector<int>& nums1, vector<int>& nums2)
    {
        vector<int> ans;
        int n= nums1.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums2[i]]=i;
        }

        for(int i=0;i<n;i++){
            ans.push_back(mp[nums1[i]]);
        }
        return ans;
    }
};
