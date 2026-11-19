class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        typedef pair<int,int> pi;
        priority_queue<pi,vector<pi>,greater<pi>> mh;
        for(int i=0;i<nums.size();i++){
            mh.push({nums[i],i});
        }
        for(int i=0;i<k;i++){
            pi smallest=mh.top();
            mh.pop();
            int index=smallest.second;
            int value=multiplier * smallest.first;
            mh.push({value,index});
            nums[smallest.second]=smallest.first*multiplier;
        }
        return nums;
    }
};