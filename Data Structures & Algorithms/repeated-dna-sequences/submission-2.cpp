class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_set<string> vis,ans;
        for(int i=0;i+10<=s.size() && i>=0;i++){
            string st=s.substr(i,10);
            if(vis.find(st)!=vis.end()){
                ans.insert(st);
            }
           // cout<<st<<" "<<s<<" "<<s.substr(i,i+10)<<" "<<i<<" "<<i+10<<" "<<s.size()<<endl;
            vis.insert(st);
        }
        vector<string> finalAns;
        for(auto itr=ans.begin();itr!=ans.end();itr++){
            finalAns.push_back(*itr);
        }

        return finalAns;
    }
};
