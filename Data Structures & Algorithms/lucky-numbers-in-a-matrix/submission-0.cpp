class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        vector<int> ans;
        for(int i=0;i<matrix.size();i++){
            //find min element;
            int value=INT_MAX,col=0;
            for(int k=0;k<n;k++){
                if(value>matrix[i][k]){
                    value=matrix[i][k];
                    col=k;
                }
            }
            
            //find largest in col
            bool isLargest=true;
            for(int k=0;k<m;k++){
                if(value<matrix[k][col]){
                    isLargest=false;
                    break;
                }
            }
            cout<<" i: "<<i<<" value "<<value<<" "<<isLargest<<endl;
            if(isLargest){
                ans.push_back(value);
            }
        }
        return ans;
    }
};
