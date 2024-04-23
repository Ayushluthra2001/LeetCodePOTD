class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if(n == 1) return {0};
        vector<int> adjList[n];
        for(int i = 0; i < edges.size(); i++) {
            adjList[edges[i][0]].push_back(edges[i][1]);
            adjList[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int> indegree(n);
        vector<int> leaves;
        for(int i = 0; i < n; i++) {
            indegree[i] = adjList[i].size();
            if(indegree[i] == 1) leaves.push_back(i);
        }
        while(n > 2) {
            n -= leaves.size();
            vector<int> newLeaves;
            for(int i = 0; i < leaves.size(); i++) {
                for(int next: adjList[leaves[i]]) {
                    indegree[next]--;
                    if(indegree[next] == 1)
                        newLeaves.push_back(next);
                }
            }
            leaves = newLeaves;
        }
        return leaves;
    }
};
