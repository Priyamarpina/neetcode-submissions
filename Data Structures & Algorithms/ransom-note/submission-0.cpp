class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> vis(26,0);
        for(int i=0;i<magazine.size();i++){
            vis[magazine[i]-'a']++;
        }

        for(int i=0;i<ransomNote.size();i++){
            if(vis[ransomNote[i]-'a']>0){
                vis[ransomNote[i]-'a']--;
            }else{
                return false;
            }
        }
        return true;
    }
};