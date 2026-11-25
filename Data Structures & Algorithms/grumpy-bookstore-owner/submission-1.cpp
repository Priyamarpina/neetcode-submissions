class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        // grumpy 1 means yes, 0 means no
        int n=customers.size(),l=0,curr=0,maxi=0,satisfied=0;
        for(int r=0;r<n;r++){
            if(grumpy[r]){
                curr+=customers[r];
            }else{
                satisfied+=customers[r];
            }
            if(r-l>=minutes){
                if(grumpy[l]){
                    curr-=customers[l];
                }
                l++;
            }
            maxi=max(maxi,curr);
        }
        return maxi+satisfied;
    }
};