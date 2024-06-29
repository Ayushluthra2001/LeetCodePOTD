class Solution {
public:

void dfs(int anncesstor , unordered_map<int,vector<int>>& adj , int currNode , vector<vector<int>>& result){

    for(auto naighbour : adj[currNode]){
        if(result[naighbour].empty() || result[naighbour].back() != anncesstor){ // avoiding duplicate
            result[naighbour].push_back(anncesstor);

            // dfs call

            dfs(anncesstor , adj, naighbour, result );
        }
    }
}
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        vector<vector<int>> ans(n);
        unordered_map<int,vector<int>>adj;


        // adjacency  list is created here 
        for(auto i : edges){
            int u = i[0];
            int v = i[1];
            adj[u].push_back(v);
        }


        for(int i = 0; i < n; i++) {
            
            // current ancesstor 
            int ancesstor = i;
            dfs(ancesstor , adj , i , ans);
        }

        return ans;
    }
};
