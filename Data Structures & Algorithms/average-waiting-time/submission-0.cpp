class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int start=customers[0][0];
        double avgSum=0.0;
        for(int i=0;i<customers.size();i++){
            int curr;
            if(customers[i][0]>start){
                curr=customers[i][1];
                start=customers[i][0]+customers[i][1];
            }else{
                curr=customers[i][1]+start-customers[i][0];
                start+=customers[i][1];
            }
            
            avgSum+=curr;
            //cout<<curr<<" ";
        }
        //cout<<avgSum<<endl;
        return avgSum/(double)(customers.size());
    }
};