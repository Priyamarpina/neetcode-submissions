class Solution {
public:
   bool isKthValid(vector<string>& words,int k){
        string krs,kcs;
        if(words.size()<=k){
            krs="";
        }else{
            krs=words[k];
        }
        for(int i=0;i<words.size();i++){
            if(words[i].size()<=k){
                kcs.push_back(' ');
            }else{
                kcs.push_back(words[i][k]);
            }
        }
        int index=kcs.size()-1;
        while(index>=0 && kcs[index]==' '){
            kcs.pop_back();
            index=kcs.size()-1;
        }
        cout<<" k : "<<k<<" kcs: "<<kcs<<" krs: "<<krs<<endl;
        return kcs==krs;
    }
    bool validWordSquare(vector<string>& words) {
        int k=words.size()-1;
        for(int i=0;i<words.size();i++){
            k = max(k,(int)words[i].size()-1);
        }
        for(int i=0;i<k;i++){
            if(!isKthValid(words,i)){
                return false;
            }
        }
        return true;
        
    }
};
