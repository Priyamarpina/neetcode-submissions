class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2)    
    {
        vector<int> ans;
        unordered_set<int> vis;
        for(int i=0;i<arr2.size();i++){
            vis.insert(arr2[i]);
        }

        unordered_map<int,int> mp;
        for(int i=0;i<arr1.size();i++){
            if(vis.find(arr1[i])!=vis.end()){
                mp[arr1[i]]++;
            }
        }

        for(int i=0;i<arr2.size();i++){
            for(int j=0;j<mp[arr2[i]];j++){
                ans.push_back(arr2[i]);
            }
        }

        int start=ans.size();
        for(int i=0;i<arr1.size();i++){
            if(vis.find(arr1[i])==vis.end()){
                ans.push_back(arr1[i]);
            }
        }
        
        sort(ans.begin()+start,ans.end());
        return ans;
    }
};