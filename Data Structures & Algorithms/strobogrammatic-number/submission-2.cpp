class Solution {
public:
    bool isStrobogrammatic(string num) {
        vector<int> mp(10,-1);
        mp[0]=0;
        mp[1]=1;
        mp[6]=9;
        mp[8]=8;
        mp[9]=6;
        int n=num.size();
        for(int i=0;i<n;i++){
            //cout<<mp[num[i]-'0']<<" "<<mp[num[n-1-i]-'0']<<endl;
            if(mp[num[i]-'0']==-1){
                return false;
            }
            if(num[i]-'0' != mp[num[n-1-i]-'0']){
                return false;
            }
        }
        return true;
    }
};
