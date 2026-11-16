class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int curr=0,ans=0;
        for(int i=0;i<k;i++){
            if(blocks[i]=='W'){
                curr++;
            }
        }
        ans=curr;
        for(int i=k;i<blocks.size();i++){
            if(blocks[i-k]=='W'){
                curr--;
            }
            if(blocks[i]=='W'){
                curr++;
            }
            ans=min(curr,ans);
        }
        return ans;
    }
};