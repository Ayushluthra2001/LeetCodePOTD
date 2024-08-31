class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
        double ans = 0;
        unordered_map<int,vector<pair<int,double>>>adj;
        vector<double>result(n,0);
        result[start_node] = 1;
        for(int i = 0; i<edges.size(); i++){
            adj[edges[i][0]].push_back({edges[i][1],succProb[i]});
            adj[edges[i][1]].push_back({edges[i][0] , succProb[i]});
        }
        priority_queue<pair<double,int>>pq;
        pq.push({1,start_node});
        while(!pq.empty()){
            int currNode  = pq.top().second;
            double currProb  = pq.top().first;
            pq.pop();
            for(auto node : adj[currNode]){
                double adjProb = node.second;
                int adjNode = node.first;
                if(result[adjNode] <currProb * adjProb){
                    result[adjNode] = currProb * adjProb;
                    pq.push({currProb * adjProb , adjNode});
                }
            }

        }
        
         return result[end_node];
    }
};
