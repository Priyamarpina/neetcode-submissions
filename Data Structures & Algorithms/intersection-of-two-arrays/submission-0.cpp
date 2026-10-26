class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> vis;
        for(int i=0;i<nums1.size();i++){
            vis.insert(nums1[i]);
        }

        vector<int> ans;
        for(int i=0;i<nums2.size();i++){
            if(vis.find(nums2[i])!=vis.end()){
                ans.push_back(nums2[i]);
                vis.erase(nums2[i]);
            }
        }

        return ans;
    }
};