class Solution {
public:
    vector<string> generatePossibleNextMoves(string currentState){
        vector<string> ans;

        for(int i=0;i<currentState.size()-1;i++){
            if(currentState[i]=='+' && currentState[i+1]=='+'){
                string temp = currentState.substr(0,i)+"--"+currentState.substr(i+2);
                ans.push_back(temp);
            }
        }

        return ans;
    }
};
