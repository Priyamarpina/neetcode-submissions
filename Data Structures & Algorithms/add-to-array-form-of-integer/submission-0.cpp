class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        reverse(num.begin(),num.end());
        int index=0;
        int carry=0;
        int n=num.size();
        while(k || carry){
            int add= k%10;
            
            int curr=0;
            if(index<n){
                curr=num[index];
            }
            int newValue = (curr + add + carry)%10;
            carry = (curr + add + carry)/10;
            if(index<n){
                num[index]=newValue;
            }else{
                num.push_back(newValue);
            }
            k=(k/10);
            index++;
        }
        reverse(num.begin(),num.end());
        return num;
    }
};
