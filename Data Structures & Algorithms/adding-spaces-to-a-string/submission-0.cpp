class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans;
        int index=0;
        for(int i=0;i<s.size();i++){
            //cout<<index<<" "<<spaces.size()<<" "<<i<<endl;
            if(index<spaces.size() && spaces[index]==i){
                //cout<<index<<" INSIDE "<<spaces[index]<<" "<<i<<endl;
                ans.push_back(' ');
                index++;
            }
            ans.push_back(s[i]);
            
        }
        return ans;
    }
};
