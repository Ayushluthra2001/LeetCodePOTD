class Solution {
public:
    void solve(vector<vector<int>>&ans, vector<int>t,int n, map<int,vector<int>>&adj,int node){
        for(auto i : adj[node]){
                if(i == n){
                    t.push_back(i);
                    ans.push_back(t);
                    t.pop_back();
                    
                }else{
                    t.push_back(i);
                solve(ans,t,n,adj,i);
                t.pop_back();
                }
            
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        map<int,vector<int>>adj;
        for(int i=0;i<graph.size();i++){
            for(int j=0;j<graph[i].size();j++){
                adj[i].push_back(graph[i][j]);
            }
        }
        // for(auto it :adj){
        //     cout<<it.first<<"->";
        //     for(auto i:it.second){
        //         cout<<i<<" ";
        //     }
        //     cout<<endl;
        // }
        vector<int>temp=adj[0];
        // for(auto i : temp){
        //     cout<<i<<" ";
        // }
        // cout<<endl;
        int n=graph.size()-1;
        // cout<<n<<endl;
        vector<vector<int>>ans;
        for(int i=0;i<temp.size();i++){
            vector<int>t;
            t.push_back(0);
            if(temp[i]==n){
                t.push_back(temp[i]);
                ans.push_back(t);
                t.pop_back();
            }else{
                t.push_back(temp[i]);
                solve(ans,t,n,adj,temp[i]);
                t.pop_back();
            }
        }
        return ans;
    }
};
