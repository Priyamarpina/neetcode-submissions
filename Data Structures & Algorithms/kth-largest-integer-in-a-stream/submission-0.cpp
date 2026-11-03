class KthLargest {
public:
    KthLargest(int k, vector<int>& nums) {
        kValue=k;
        for(int i=0;i<nums.size();i++){
            topK.push(nums[i]);
            if(topK.size()>k){
                topK.pop();
            }
        }
    }
    
    int add(int val) {
        topK.push(val);
        if(topK.size()>kValue){
            topK.pop();
        }
        return topK.top();
        
    }
    priority_queue<int, vector<int>, greater<int>> topK;
    int kValue;
};
