class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        int n=nums.size(),ans=-1;
        long long total=0;
        priority_queue<int> q;
        for(int i=0;i<n;i++){
            q.push(nums[i]);
            total+=nums[i];
        }
        while(q.size()>2){
            int largest=q.top();
            q.pop();
            if(total-largest>largest){
                return total;
            }
            total-=largest;
        }
        return ans;
    }
};
