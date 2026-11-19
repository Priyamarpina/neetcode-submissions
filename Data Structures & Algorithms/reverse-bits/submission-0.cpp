class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        string val;
        while(n){
            int mod=n%2;
            n=n/2;
            val.push_back((char)(mod+'0'));
        }
        cout<<val<<endl;
        uint32_t ans=0;
        int powValue=31;
        for(int i=0;i<val.size();i++){

            ans+=((val[i]-'0')*pow(2,powValue));
            powValue--;
        }

        return ans;
    }
};
