class Solution {
public:
    bool isSameString(string haystack, string needle,int startIndex){
        int itr=startIndex;
        int length=0;
        int i=0;
        while(itr<haystack.size()&&i<needle.size()){
            if(haystack[itr]==needle[i]){
                i++;
                itr++;
                length++;
            }else{
                break;
            }
        }
        return length==needle.size();
    }
    int strStr(string haystack, string needle) {
        for(int i=0;i<haystack.size();i++){
            if(haystack[i]==needle[0] && isSameString(haystack,needle,i)){
                return i;
            }
        }

        return -1;
    }
};