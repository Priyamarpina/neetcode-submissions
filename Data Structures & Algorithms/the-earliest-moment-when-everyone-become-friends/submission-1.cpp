class Solution {
public:
    int find(int n,vector<int> &parent){
        int p1=parent[n];
        while(p1!=parent[p1]){
            p1=parent[p1];
        }
        return p1;
    }
    void Union(vector<int> &parent, vector<int> &rank, int n1, int n2){
        int parent1=find(n1,parent);
        int parent2=find(n2,parent);

        if(parent1==parent2){
            return;
        }
        if(rank[parent1]>rank[parent2]){
            rank[parent1]+=rank[parent2];
            parent[n2]=parent1;
        }else{
            rank[parent2]+=rank[parent1];
            parent[n1]=parent2;
        }
    }
    int earliestAcq(vector<vector<int>>& logs, int n) {
        sort(logs.begin(),logs.end());
        vector<int> rank(n+1,1),parent(n+1);
        for(int i=0;i<=n;i++){
            parent[i]=i;
        }

        for(int i=0;i<logs.size();i++){
            int n1=logs[i][1];
            int n2=logs[i][2];
            Union(parent,rank,n1,n2);
            int p = parent[n1];
            if(rank[p]==n){
                return logs[i][0];
            }
        }
        return -1;
    }
};
