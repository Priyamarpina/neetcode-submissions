class Solution {
public:
    bool isSubString(string full, string sub){
        if(full.size()<sub.size()){
            return false;
        }
        if(full.find(sub)!=string::npos){
            return true;
        }
        return false;
    }
    vector<string> stringMatching(vector<string>& words) {
        int n=words.size();
         unordered_set<string> ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j && isSubString(words[i],words[j])){
                    ans.insert(words[j]);
                }
            }
        }
        vector<string> finalAns;
        for(auto itr=ans.begin();itr!=ans.end();itr++){
            finalAns.push_back(*itr);
        }
        return finalAns;
    }
};