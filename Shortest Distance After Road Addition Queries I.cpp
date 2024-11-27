class Solution {
public:
     unordered_map<int,vector<pair<int,int>>>mapping;
    int dijkstra(int n){
        vector<int>dist(n,INT_MAX);

        priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,0});
        dist[0] = 0;


        while(! pq.empty()){

            pair<int,int>p = pq.top();
            pq.pop();
            int w = p.first;
            int u = p.second;

            for(auto i : mapping[u]){
                int adjNode = i.first;
                int weight = i.second;
                if(weight + w < dist[adjNode]){
                    dist[adjNode] = weight + w;
                    pq.push({weight+ w,adjNode });
                }
            }

        }

        return dist[n-1];
    }
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) {
       

        for(int i = 0; i<=n-2; i++){
          
          
            mapping[i].push_back({i+1,1});
            
        }
        
       vector<int>result;
        for(int i = 0; i<queries.size(); i++){
            int u = queries[i][0];
            int v= queries[i][1];
            mapping[u].push_back({v,1});
            int d = dijkstra(n);
            result.push_back(d);

        }
        return result;
    }
};
