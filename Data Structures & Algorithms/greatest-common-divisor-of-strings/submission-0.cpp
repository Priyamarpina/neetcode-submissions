class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int l=str1.size(),s=str2.size();
        if(s>l){
            swap(s,l);
            swap(str1,str2);
        }
        for(int i=s;i>0;i--){
            if(l%i!=0 || s%i!=0){
                continue;
            }
            bool isValid=true;
            for(int j=0;j<l;j++){
                if(str1[j]!=str2[j%i]){
                    isValid=false;
                    break;
                }
            }
            if(!isValid){
                continue;
            }
             for(int j=0;j<s;j++){
                if(str2[j]!=str2[j%i]){
                    isValid=false;
                    break;
                }
            }
            if(isValid){
                return str1.substr(0,i);
            }
        }
        return "";
    }
};