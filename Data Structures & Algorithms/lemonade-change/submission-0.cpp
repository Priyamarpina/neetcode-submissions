class Solution {
public:
    bool isPossible(int value, int &count5,int &count10,int &count20){
       // cout<<"value : "<<value<<" count5: "<<count5<<" count10 : "<<count10<<" count20 : "<<count20<<endl;
        while(value>=20 && count20>0){
            value=value-20;
            count20--;
        }
        while(value>=10 && count10>0){
            value=value-10;
            count10--;
        }
        while(value>=5 && count5>0){
            value=value-5;
            count5--;
        }
        return value==0;
    }
    bool lemonadeChange(vector<int>& bills) {
        if(bills[0]!=5){
            return false;
        }
        int count5=1,count10=0,count20=0;
        for(int i=1;i<bills.size();i++){
            if(!isPossible(bills[i]-5,count5,count10,count20)){
                return false;
            }

            if(bills[i]==5){
                count5++;
            }else if(bills[i]==10){
                count10++;
            }else{
                count20++;
            }
        }
        return true;
    }
};