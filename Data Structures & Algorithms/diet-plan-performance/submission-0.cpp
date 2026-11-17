class Solution {
public:
    int dietPlanPerformance(vector<int>& calories, int k, int lower, int upper) {
        int sum=0;
        int output=0;
        int left =0, right=k;

        for(int i=0;i<k;i++){
            sum+=calories[i];
        }
        if(sum<lower){
            output--;
        }else if(sum>upper){
            output++;
        }
    
        while(right<calories.size()){
            sum-=calories[left];
            left++;
            sum+=calories[right];
            right++;
            if(sum<lower){
                output--;
            }else if(sum>upper){
                output++;
            }
        }

        return output;
    }
};
