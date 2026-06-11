class Solution {
public:
int findMaxDepth(int root , unordered_map<int,vector<int>>&adj, int parent){
    vector<int>temp = adj[root];
    int maxi = 0;
    for(int i =0; i<temp.size(); i++){
        if(temp[i] == parent) continue;
        maxi = max(maxi , findMaxDepth(temp[i],adj,root)+1);
    }
    return maxi;
}
    int assignEdgeWeights(vector<vector<int>>& edges) {
        unordered_map<int,vector<int>>adj;

        for(int i =0; i<edges.size(); i++){
            int u  = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);


        }

        int maxDepth = findMaxDepth(1,adj,-1);

        cout<<maxDepth<<endl;
        int mod = 1e9+7;
        int ans = 1;
        for(int i=1;i<maxDepth; i++){
            ans = ( ans * 2)%mod;
        }
        return ans;
    }
};
