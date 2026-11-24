class Solution {
public:
    bool canChange(string start, string target) {
        int sn=start.size(), tn=target.size();
        int i=0,j=0;
        while(i<sn || j<tn){
            while(i<sn && start[i]=='_'){
                i++;
            }
             while(j<tn && target[j]=='_'){
                j++;
            }
            if(i==sn && j==tn){
                return true;
            }
            if(i==sn || j==tn){
                return false;
            }
            if(start[i]!=target[j]){
                cout<<start[i]<<" "<<i<<" "<<target[j]<<" "<<endl;
                return false;
            }
            if(start[i]=='L' && i<j){
                cout<<start[i]<<" "<<i<<" "<<j<<" L"<<endl;
                return false;
            }
            if(start[i]=='R' && i>j){
                cout<<start[i]<<" "<<i<<" "<<j<<" R"<<endl;
                return false;
            }
            i++;
            j++;
        }
        cout<<i<<" "<<j<<" out"<<endl;
        return i==sn && j==tn;
    }
};
