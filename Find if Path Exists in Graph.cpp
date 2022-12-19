class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
 unordered_map<int,vector<int>>mapping;
 for(int i=0;i<edges.size();i++){
     int first=edges[i][0];
     int second=edges[i][1];
     mapping[first].push_back(second);
     mapping[second].push_back(first);
 }  
  
    
    queue<int>q;
    q.push(source);
    vector<bool>visited(n+1,false);
    visited[source]=true;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        vector<int>temp=mapping[node];
            for(int i=0;i<temp.size();i++){
                
                if(visited[temp[i]]==false){
                    q.push(temp[i]);
                    visited[temp[i]]=true;
                }
            }
            if(visited[destination]) return true;
        
    }
    return visited[destination];
    }
};
