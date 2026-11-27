class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int n=trips.size();
        vector<pair<int,int>> starts(n),ends(n);
        int startTime=INT_MAX,endTime=INT_MIN;
        for(int i=0;i<n;i++){
            starts[i]={trips[i][1],trips[i][0]};
            ends[i]={trips[i][2],trips[i][0]};
            startTime=min(startTime,trips[i][1]);
            endTime=max(endTime,trips[i][2]);
        }
        sort(starts.begin(),starts.end());
        sort(ends.begin(),ends.end());
        int travel=startTime;
        int si=0,ei=0,pass=0;
        while(travel<=endTime){
            
            while(ei<ends.size() && ends[ei].first==travel){
                pass-=ends[ei].second;
                ei++;
            }
            while(si<n && starts[si].first==travel){
                pass+=starts[si].second;
                si++;
            }
            if(pass>capacity){
                return false;
            }
            //cout<<travel<<" "<<pass<<endl;
            travel++;
        }
        return true;
    }
};