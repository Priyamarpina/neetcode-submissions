class Solution {
public:
    pair<char,char> difference(char aV,char bV){
        int a,b;
        auto val=stringToInt(aV,bV);
        a=val.first;
        b=val.second;
        int x=a,y=b;
        int mini=INT_MAX;
        for(int i=0;i<16;i++){
            int value=abs(((a*16)+b) - ((i*16)+i));
            if(mini>value){
                //cout<<" a : "<<a<<" b : "<<b<<" i : "<<i<<" value : "<<value<<" mini : "<<mini<<endl;
                mini=value;
                x=i;
                y=i;
            }
        }
        pair<char,char> finalAns=intToString(x,y);
        return finalAns;
    }

    pair<char,char> intToString(int x,int y){
        string converter="0123456789abcdef";
        char a=converter[x],b=converter[y];
        return {a,b};
    }

    pair<int,int> stringToInt(char a,char b){
        int x,y;
        unordered_map<char,int> mp;
        mp['a']=10;
        mp['b']=11;
        mp['c']=12;
        mp['d']=13;
        mp['e']=14;
        mp['f']=15;

        if(a-'0'>=0 && a-'0'<=9){
            x=a-'0';
        }else{
            x=mp[a];
        }

        if(b-'0'>=0 && b-'0'<=9){
            y=b-'0';
        }else{
            y=mp[b];
        }
        
        return {x,y};
    }

    string similarRGB(string color) {
        string ans(7,' ');
        ans[0]='#';
        int index=1;
        while(index<color.size()){
            pair<char,char> values=difference(color[index],color[index+1]);
            ans[index]=values.first;
            ans[index+1]=values.second;
            index=index+2;
        }
        return ans;
    }
};
