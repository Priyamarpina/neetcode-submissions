class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int> ans;
        int n=code.size();
        if(k==0){
            return vector<int>(n,0);
        }
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=1;j<=abs(k);j++){
                if(k>0){
                    sum+=code[(i+j)%n];
                }else{
                    sum+=code[(i-j+n)%n];
                }
                
            }
            ans.push_back(sum);
        }
        return ans;
    }
};
