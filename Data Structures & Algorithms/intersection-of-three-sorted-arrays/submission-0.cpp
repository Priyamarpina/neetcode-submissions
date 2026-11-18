class Solution {
public:
    vector<int> arraysIntersection(vector<int>& arr1, vector<int>& arr2, vector<int>& arr3) {
        vector<int> vis(2001,0);
        for(int i=0;i<arr1.size();i++){
            vis[arr1[i]]++;
        }

        for(int i=0;i<arr2.size();i++){
            vis[arr2[i]]++;
        }

        for(int i=0;i<arr3.size();i++){
            vis[arr3[i]]++;
        }

        vector<int> ans;
        for(int i=0;i<vis.size();i++){
            if(vis[i]==3){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
