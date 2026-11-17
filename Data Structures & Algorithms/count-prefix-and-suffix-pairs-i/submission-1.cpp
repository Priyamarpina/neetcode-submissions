class Solution {
public:
    int isPrefixAndSuffix(string &str1, string &str2){
       // cout<<" str1 :" <<str1<<" str2: "<<str2<<endl;
        if(str2.size()<str1.size()){
            return 0;
        }
        int index=0;
        int n=str1.size(),m=str2.size();
        while(index<str1.size()){
            if(str1[index]!=str2[index]){
                //cout<<" str1 : "<<str1<<" str1[index] : "<<str1[index]<<" str2[index] : "<<str2[index]<<" str2 :" <<str2<<" index : "<<index<<endl;
                return 0;
            }
            if(str1[n-1-index]!=str2[m-1-index]){
                return 0;
            }
            index++;
        }
        return 1;
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        int ans=0;
        for(int i=0;i<words.size();i++){
            for(int j=i+1;j<words.size();j++){
                int value1 =isPrefixAndSuffix(words[i],words[j]);
                //cout<<" value1: "<<value1<<" str1 :" <<words[i]<<" str2: "<<words[j]<<endl;
                // cout<<" value2: "<<value2<<" str1 :" <<words[j]<<" str2: "<<words[i]<<endl;
                ans+=value1;
            }
        }
        return ans;
    }
};