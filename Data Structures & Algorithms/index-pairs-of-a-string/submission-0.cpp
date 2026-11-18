class Solution {
public:
    bool isMatchingWord(string word,string text,int j){
        int i=0;
        int n=text.size();
        cout<<word<<" "<<text[j]<<endl;
        while(i<word.size() && j<n){
            if(word[i]!=text[j]){
                return false;
            }
            i++;
            j++;
        }
        cout<<i<<" "<<word.size()<<" "<<word<<endl;
        return i==word.size();
    }
    vector<vector<int>> indexPairs(string text,vector<string>& words) {
        vector<vector<int>> ans;
        for(int i=0;i<words.size();i++){
            for(int j=0;j<text.size();j++){
                if(words[i][0]==text[j] && isMatchingWord(words[i],text,j)){
                    vector<int> temp;
                    temp.push_back(j);
                    temp.push_back(j+words[i].size()-1);
                  //  cout<<temp[0]<<" "<<temp[1]<<endl;
                    ans.push_back(temp);
                   // break;
                }
            }
        }
        cout<<"Before : ";
        for(int i=0;i<ans.size();i++){
            cout<<ans[i][0]<<" "<<ans[i][1]<<" ";
        }
        cout<<endl;
        sort(ans.begin(),ans.end(),[](const vector<int> &a, const vector<int> &b){
            if(a[0]==b[0]){
                return a[1]<b[1];
            }
            return a[0]<b[0];
        });
        
        cout<<"After : ";
        for(int i=0;i<ans.size();i++){
           cout<<ans[i][0]<<" "<<ans[i][1]<<" ";
        }
        cout<<endl;
        return ans;
    }
};
