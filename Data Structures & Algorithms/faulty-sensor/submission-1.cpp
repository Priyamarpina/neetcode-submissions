class Solution {
public:
    int badSensor(vector<int>& sensor1, vector<int>& sensor2) {
        
        int n=sensor1.size();
        int varyingIndex=n-1;
        for(int i=0;i<n;i++){
            if(sensor1[i]!=sensor2[i]){
                varyingIndex=i;
                break;
            }
        }
        //cout<<varyingIndex<<endl;
        int sensor1Wrong=0,sensor2Wrong=0;
        for(int i=varyingIndex;i<n-1;i++){
            if(sensor1[i]==sensor2[i+1]){
                sensor1Wrong++;
            }

            if(sensor2[i]==sensor1[i+1]){
                sensor2Wrong++;
            }
        }
       // cout<<sensor1Wrong<<" "<<sensor2Wrong<<endl;
        if(sensor1Wrong==0 && sensor2Wrong==0){
            return -1;
        }

        if(n-varyingIndex-1==sensor1Wrong){
            return 1;
        }
        return 2;
    }   
};
