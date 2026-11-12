class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int n=s1.size();
        vector<int> vis(26,0);
        
        for(int i=0;i<n;i++){
            vis[s1[i]-'a']++;
        }

        for(int i=0;i<n;i++){
            if(vis[s2[i]-'a']<=0){
                return false;
            }
            vis[s2[i]-'a']--;
        }

        // for(int i=0;i<26;i++){
        //     if(vis[i]!=0){
        //         return false;
        //     }
        // }
        int mismatch=0;
        for(int i=0;i<n;i++){
            if(s1[i]!=s2[i]){
                mismatch++;
            }
        }
        return mismatch<=2;
    }
};
