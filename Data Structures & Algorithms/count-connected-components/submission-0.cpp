class Solution {
public:
    int findParent(int n,vector<int> &parent){
        int p=parent[n];
       // cout<<n<<" "<<endl;
        while(p!=parent[p]){
            parent[p]=parent[parent[p]];
            p=parent[p];
        }
       return p;
    }
    void doUnion(int n1,int n2, vector<int> &parents,vector<int> &ranks){
       // cout<<n1<<" "<<n2<<endl;
        int p1=findParent(n1, parents);
        int p2=findParent(n2, parents);
        if(p1==p2){
            return;
        }
        if(ranks[p1]>ranks[p2]){
            ranks[p1]+=ranks[p2];
            parents[p2]=parents[p1];
        }else{
            ranks[p2]+=ranks[p1];
            parents[p1]=parents[p2];
        }
    }
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<int> parents(n),ranks(n,1);
        for(int i=0;i<n;i++){
            parents[i]=i;
        }
        for(int i=0;i<edges.size();i++){
           // cout<<edges[i][0]<<" "<<edges[i][1]<<endl;
            doUnion(edges[i][0],edges[i][1],parents,ranks);
        }

        int ans=0;
        for(int i=0;i<n;i++){
            if(parents[i]==i){
                ans++;
            }
        }
        return ans;
    }
};
