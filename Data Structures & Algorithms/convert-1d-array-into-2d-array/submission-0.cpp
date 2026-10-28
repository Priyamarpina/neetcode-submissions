class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> ans;
        if((m*n)!=original.size()){
            return ans;
        }

        ans = vector<vector<int>>(m,vector<int>(n,0));
        int row=0,col=0;
        for(int i=0;i<original.size();i++){
           
            //cout<<row<<" "<<col<<" "<<original[i]<<endl;
            ans[row][col]=original[i];
            if((i+1)%n==0){
                row++;
                col=0;
            }else{
                col++;
            }
            
        }
        return ans;
    }
};
