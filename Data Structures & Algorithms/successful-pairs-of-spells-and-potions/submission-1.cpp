class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        // for(auto p:potions){
        //     cout<<p<<" ";
        // }
        // cout<<endl;
        vector<int> ans;
        for(int i=0;i<spells.size();i++){
            int currAns=0;
            int left=0, right=potions.size()-1;
            while(left<=right){
                int mid=(left+right)/2;
                //cout<<" left "<<left<<" right "<<right<<" spells "<<spells[i]<<" potion[mid] "<<potions[mid]<<" mul "<<spells[i]*potions[mid]<<" "<<success<<endl;
                if((long long)spells[i]*potions[mid]>=success){
                    currAns=max(currAns,(int)potions.size()-mid);
                    right=mid-1;
                }else{
                    left=mid+1;
                }
            }

            ans.push_back(currAns);
        }
        return ans;
    }
};
