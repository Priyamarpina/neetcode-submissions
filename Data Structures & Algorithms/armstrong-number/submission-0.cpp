class Solution {
public:
    bool isArmstrong(int n) {
        long long sum=0;
        string val=to_string(n);
        int power=val.size();
        for(int i=0;i<val.size();i++){
            if(sum>n){
                return false;
            }
            sum+=pow(val[i]-'0',power);
        }
        return sum==n;
    }
};
