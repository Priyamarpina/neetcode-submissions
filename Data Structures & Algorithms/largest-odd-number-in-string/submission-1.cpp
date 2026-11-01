class Solution {
public:
    string largestOddNumber(string num) {
        int end=-1;
        for(int i=num.size()-1;i>=0;i--){
            if((num[i]-'0')%2==1){
                end=i;
                break;
            }
        }
        int start=0;
        while(start<end){
            if(num[start]-'0'==0){
                start++;
            }else{
                break;
            }
        }
        return num.substr(start,end+1);
    }
};
