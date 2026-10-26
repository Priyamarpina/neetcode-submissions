class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> nums1Set, nums2Set;

        for(int i=0;i<nums1.size();i++){
            nums1Set.insert(nums1[i]);
        }

        for(int i=0;i<nums2.size();i++){
            nums2Set.insert(nums2[i]);
        }

        vector<vector<int>> ans;
        vector<int> temp;
        for(int i=0;i<nums1.size();i++){
            if(nums2Set.find(nums1[i])==nums2Set.end()){
                temp.push_back(nums1[i]);
                nums2Set.insert(nums1[i]);
            }
        }

        ans.push_back(temp);
        temp.clear();
        for(int i=0;i<nums2.size();i++){
            if(nums1Set.find(nums2[i])==nums1Set.end()){
                temp.push_back(nums2[i]);
                nums1Set.insert(nums2[i]);
            }
        }
        ans.push_back(temp);

        return ans;
    }
};