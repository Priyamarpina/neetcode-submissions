class Solution {
public:
    void leftShift(string &s, int k){
        reverse(s.begin(),s.end());
        reverse(s.begin(),s.begin()+s.size()-k);
        reverse(s.begin()+s.size()-k,s.end());
    }

     void rightShift(string &s, int k){
        reverse(s.begin(),s.end());
        reverse(s.begin(),s.begin()+k);
        reverse(s.begin()+k,s.end());
    }
    string stringShift(string s, vector<vector<int>>& shift) {
        for(int i=0;i<shift.size();i++){
            if(shift[i][0]==0){
                leftShift(s,shift[i][1]);
            }else{
                rightShift(s,shift[i][1]);
            }
        }
        return s;
    }
};
