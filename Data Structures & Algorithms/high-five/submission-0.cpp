class Solution {
public:
    vector<vector<int>> highFive(vector<vector<int>>& items) {
        map<int,priority_queue<int,vector<int>,greater<>>> mp;
        for(auto item: items){
            mp[item[0]].push(item[1]);
           // auto q=mp.item
            if(mp[item[0]].size()>5){
                mp[item[0]].pop();
            }
        } 
        vector<vector<int>> ans;
        for(auto itr=mp.begin();itr!=mp.end();itr++){
            int avg=0;
            while(itr->second.size()){
                avg+=itr->second.top();
                itr->second.pop();
            }
            itr->second.push((avg)/5);
        }

        for(auto itr=mp.begin();itr!=mp.end();itr++){
            ans.push_back({itr->first,itr->second.top()});
        }
        return ans;
    }
};
