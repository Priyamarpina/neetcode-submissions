class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int ans=0;
        queue<pair<int,int>> q;
        for(int i=0;i<tickets.size();i++){
            if(i==k){
                if(tickets[i]==0){
                    return ans;
                }
                q.push({tickets[i],1});
            }else{
                q.push({tickets[i],0});
            }
        }
        while(q.size()){
            int value=q.front().first;
            int index=q.front().second;
            q.pop();
            ans++;
            if(value==1 && index==1){
                return ans;
            }else if(value>1){
                q.push({value-1,index});
            }
        }
        return INT_MAX;
    }
};