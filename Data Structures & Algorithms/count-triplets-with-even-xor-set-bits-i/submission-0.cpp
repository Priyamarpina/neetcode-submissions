class Solution {
public:
    bool isEvenSetBit(int x){
        int count=0;
        while(x){
            int mod = x%2;
            x=x/2;
            if(mod){
                count++;
            }
        }
        return count%2==0;
    }
    int tripletCount(vector<int>& a, vector<int>& b, vector<int>& c) {
        int ans=0;
        for(int i=0;i<a.size();i++){
            for(int j=0;j<b.size();j++){
                for(int k=0;k<c.size();k++){
                    if(isEvenSetBit(a[i]^b[j]^c[k])){
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};
