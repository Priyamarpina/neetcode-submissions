class Solution {
public:
    bool confusingNumber(int n) {
        unordered_set<int> s={2,3,4,5,7};
        unordered_map<int,int> mp;
        mp[0]=0;
        mp[1]=1;
        mp[6]=9;
        mp[8]=8;
        mp[9]=6;

        long long ans=0;
        long long originalN=n;
        while(n!=0){
            int value=n%10;
            n=n/10;
            if(s.find(value)!=s.end()){
                return false;
            }
            ans = (ans*10) + mp[value];
        }
        //cout<<ans<<" "<<originalN<<endl;
        return ans!=originalN;
    }
};
