class Solution {
public:
    int sumOfDigits(vector<int>& nums) {
        int smallest=INT_MAX;
        for(int i=0;i<nums.size();i++){
            smallest= min(smallest,nums[i]);
        }
        int sum=0;
        while(smallest!=0){
            sum= sum +(smallest%10);
            smallest=smallest/10;
        }
        return sum%2==0;
    }
};
