class Solution {
public:
    bool isPathCrossing(string path) {
        unordered_set<string> vis;
        int x=0, y=0;
        vis.insert(to_string(x) + "," + to_string(y));
        for(int i=0;i<path.size();i++){
            char c=path[i];
            if(c=='N'){
                y++;
            }else if(c=='S'){
                y--;
            }else if(c=='E'){
                x++;
            }else if(c=='W'){
                x--;
            }
            string temp=to_string(x) + "," + to_string(y);
            if(vis.find(temp)!=vis.end()){
                return true;
            }
            vis.insert(temp);
        }
        return false;
    }
};