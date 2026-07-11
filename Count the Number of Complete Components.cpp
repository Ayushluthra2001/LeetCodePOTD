class Solution {
public:
    void dfs(int parent , unordered_map<int,vector<int>>&adj, vector<bool>&visited,vector<int>&Component){
        if(visited[parent] == true) return;
        visited[parent] = true;
        Component.push_back(parent);
        for(auto i : adj[parent]){
            
            if(visited[i] == false)
            dfs(i,adj,visited,Component);
        }

    }
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        unordered_map<int,vector<int>>adj;
        
        vector<bool>visited(n,0);
        
        int count = 0;
        for(int i =0; i<edges.size(); i++){
            int u = edges[i][0];
            int v = edges[i][1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        

        for(int i = 0; i<n; i++){
            
            if(visited[i] == false){
                vector<int>Component;
                dfs(i,adj,visited,Component);
                int v = Component.size();
                int edgesRequired = v * (v-1)/2; 
                int currentEdges  = 0;
                for(int i = 0; i<v; i++){
                    currentEdges += adj[Component[i]].size();
                }

                // degreeSum ;
                if(currentEdges == 2*edgesRequired) count++;
                // dfs(parent,adj, visited)
                
            }
        }

        for(auto i : visited) cout<<i<<" ";
        cout<<endl;

        return count;
    }
};
