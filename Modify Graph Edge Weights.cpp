class Solution {    
public:
    vector<vector<int>> modifiedGraphEdges(int n, vector<vector<int>>& edges, int source, int destination, int target) {
        int INF = 2e9;
        unordered_map<int, vector<pair<int, int>>> nodeNeighMp;
        
        for (auto& edge : edges) {
            int firstNode = edge[0], secondNode = edge[1], edgWt = edge[2];
            if (edgWt == -1) continue;
            nodeNeighMp[firstNode].emplace_back(secondNode, edgWt);
            nodeNeighMp[secondNode].emplace_back(firstNode, edgWt);
        }
        
        int srcDestDist = findShortestDist(n, source, destination, nodeNeighMp);
        
        if (srcDestDist < target) {
            return {};
        }
        
        bool distEqToTrgt = srcDestDist == target;
        
        for (int indx = 0; indx < edges.size(); indx++) {
            auto& edge = edges[indx];
            int firstNode = edge[0], secondNode = edge[1], edgWt = edge[2];
            if (edgWt != -1) continue;
            
            edgWt = distEqToTrgt ? INF : 1;
            nodeNeighMp[firstNode].emplace_back(secondNode, edgWt);
            nodeNeighMp[secondNode].emplace_back(firstNode, edgWt);
            
            if (!distEqToTrgt) {
                srcDestDist = findShortestDist(n, source, destination, nodeNeighMp);
                if (srcDestDist <= target) {
                    edgWt += (target - srcDestDist);
                    distEqToTrgt = true;
                }
            }
            
            edge[2] = edgWt;
        }
        
        return distEqToTrgt ? edges : vector<vector<int>>{};
    }

private:
    int findShortestDist(int n, int startNode, int endNode, unordered_map<int, vector<pair<int, int>>>& nodeNeighMp) {
        int INF = 2e9;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minDisFrmSrcHeap;
        vector<int> distFrmSrc(n, INF);
        distFrmSrc[startNode] = 0;
        minDisFrmSrcHeap.emplace(distFrmSrc[startNode], startNode);
        
        while (!minDisFrmSrcHeap.empty()) {
            auto nodePr = minDisFrmSrcHeap.top();
            minDisFrmSrcHeap.pop();
            int nodeVal = nodePr.second, nodeDisFrmSrc = nodePr.first;
            if (!nodeNeighMp.count(nodeVal)) continue;
            for (auto& neighPr : nodeNeighMp[nodeVal]) {
                int neighVal = neighPr.first, neighNodeDist = neighPr.second;
                if (neighNodeDist + nodeDisFrmSrc < distFrmSrc[neighVal]) {
                    distFrmSrc[neighVal] = neighNodeDist + nodeDisFrmSrc;
                    minDisFrmSrcHeap.emplace(distFrmSrc[neighVal], neighVal);
                }
            }
        }
        
        return distFrmSrc[endNode];
    }
};
