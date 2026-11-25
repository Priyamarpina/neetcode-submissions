class Solution {
public:
    string reorganizeString(string s) {
        vector<int> freq(26,0);
        int maxi=0,index;
        for(auto c:s){
            freq[c-'a']++;
            if(freq[c-'a']>maxi){
                maxi=freq[c-'a'];
                index=c-'a';
            }
        }
        if(maxi>((s.size()+1)/2)){
            return "";
        }
        char c=freq[index];
        int newIndex=0;
        string ans(s.size(),' ');
        while(freq[index]){
            ans[newIndex]=index+'a';
            newIndex=newIndex+2;
            freq[index]--;
        }

        for(int i=0;i<26;i++){
            while(freq[i]){
                if(newIndex>=s.size()){
                    newIndex=1;
                }
                ans[newIndex]=i+'a';
                newIndex=newIndex+2;
                freq[i]--;
            }
        }
        return ans;
    }
};