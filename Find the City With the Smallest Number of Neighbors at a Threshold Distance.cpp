class Solution {
public:

// dijkstra algorithm 

void dijkstra( int n ,unordered_map<int,vector<pair<int,int>>>&adj , vector<int>& row , int source){

    priority_queue<pair<int,int> , vector<pair<int,int>>,greater<pair<int,int>>>pq;


    pq.push({0,source});

     fill(row.begin(),row.end(),INT_MAX);
    row[source] = 0;

    while(!pq.empty()){
        pair<int, int> p = pq.top();
        pq.pop();
        int distance = p.first;
        int node = p.second;
        for(auto i : adj[node]){
            int adjNode = i.first;
            int dist = i.second;


            if(distance+dist < row[adjNode]){
                row[adjNode] = distance+dist;
                pq.push({distance+dist,adjNode});
            }
        }
    }
}
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector<vector<int>>shortestPath(n,vector<int>(n,INT_MAX));
        

        // current node to currentNode shortest path is 0 
        for(int i=0;i<n;i++){
            shortestPath[i][i] =0;
        }

        // adjancy list 
        unordered_map<int,vector<pair<int,int>>>mapping;
         for (int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            int w = edges[i][2];


            mapping[u].push_back({v,w});
            mapping[v].push_back({u,w});
        }

        for(int i=0;i<n;i++){
            dijkstra(n,mapping,shortestPath[i],i);

        }

        // count no of cites;
        int result =-1;
        int x =INT_MAX;

        for(int i=0;i<n;i++){
            int reach =0;
            for(int j=0;j<n;j++){
                if(i!=j && shortestPath[i][j] <=distanceThreshold){
                    reach++;
                }
            }
            if(reach<=x){
                x = reach;
                result = i;
            }
        }


        return result;
    }
};
