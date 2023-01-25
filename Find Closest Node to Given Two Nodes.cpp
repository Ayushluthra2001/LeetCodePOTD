class Solution {
public:
    void dfs(int node , vector<bool>&vis, vector<int>&dist,int d,vector<int>& edges){
        
        if(node!=-1 && !vis[node] ){
            vis[node]=true;
            dist[node]=d;
            dfs(edges[node],vis,dist,d+1,edges);
        }
        
        
        

    }
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        vector<int>dist1(edges.size(),-1);
        vector<int>dist2(edges.size(),-1);
        vector<bool>vis1(edges.size(),false);
        vector<bool>vis2(edges.size(),false);
        dfs(node1,vis1,dist1,0,edges);
        dfs(node2,vis2,dist2,0,edges);
        int node=-1;
        int mini=INT_MAX;
        for(int i=0;i<edges.size();i++){
            if(dist1[i] !=-1 && dist2[i]!=-1){
                int maxi=max(dist1[i],dist2[i]);
                if(mini>maxi){
                    mini=maxi;
                    node=i;
                }
            }
        }
        return node;
    }
};
