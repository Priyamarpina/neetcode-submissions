class Solution {
public:
    int find(int n,vector<int> &parent){
        int p1=parent[n];
        while(p1!=parent[p1]){
            parent[p1]=parent[parent[p1]];
            p1=parent[p1];
        }
        return p1;
    }
    bool Union(int n1,int n2,vector<int> &parent,vector<int> &rank){
        int p1=find(n1,parent);
        int p2=find(n2,parent);
        //cout<<"n1 - p1 "<<n1<<" "<<p1<<endl;
        //cout<<"n2 - p2 "<<n2<<" "<<p2<<endl;
        if(p1==p2){
            return false;
        }

        if(rank[p1]>rank[p2]){
            parent[p2]=p1;
            rank[p1]+=rank[p2];
        }else{
            parent[p1]=p2;
            rank[p2]+=rank[p1];
        }
       // cout<<"AFTER n1 - p1 "<<n1<<" "<<find(n1,parent)<<endl;
       // cout<<"AFTER n2 - p2 "<<n2<<" "<<find(n2,parent)<<endl;
        return true;

    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n=edges.size();
        vector<int> rank(n+1,1),parent(n+1);
        for(int i=0;i<=n;i++){
            parent[i]=i;
        }
        vector<int> ans;
        for(int i=0;i<n;i++){
            int n1=edges[i][0];
            int n2=edges[i][1];
            //cout<<"START "<<n1<<" "<<n2<<endl;
            if(!Union(n1,n2,parent,rank)){
                ans={n1,n2};
            }
           // cout<<"END_--------"<<endl;
        }

        return ans;
    }
};
