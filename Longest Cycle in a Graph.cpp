int longestCycle(vector<int>& edges) {
          
        vector<int>dist_node(edges.size(),0);
        vector<bool>extra(edges.size(), false);
        vector<bool>visited(edges.size(),false);
        int ans = -1;
         for(int i=0;i<edges.size();i++)
         {     
               if(!visited[i])
               dfs(i,dist_node, visited, edges,0, ans, extra);
         }
        
        return ans;
    }
    
     void dfs(int node, vector<int>&dist_node1, vector<bool>&visited,
              vector<int>& edges, int distance, int& ans, vector<bool>& extra)
      {          
           if(node!=-1 )
           {
               if(!visited[node] )
           {  visited[node] = true;
              extra[node]  = true;
              dist_node1[node] = distance;
             dfs(edges[node], dist_node1, visited, edges, distance+1, ans, extra);
           }
               else if(extra[node])
               {   
                   ans = max(ans, distance - dist_node1[node]);
               } 
               
               extra[node]  = false;
           }
      }
