class NumArray {
public:
    NumArray(vector<int>& nums) {
        int sum=0;
        sumArray.push_back(sum);
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            sumArray.push_back(sum);
        }
    }
    
    int sumRange(int left, int right) {
        return sumArray[right+1]-sumArray[left];
    }
    vector<int> sumArray;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */