class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
         vector<int> inDegree(n, 0);

    for (const vector<int>& edge : edges) {
        int v = edge[1];
        inDegree[v]++;
    }

    int champion = -1;

    for (int i = 0; i < n; i++) {
        if (inDegree[i] == 0) {
            if (champion != -1) {
                // If we already found a champion, return -1
                return -1;
            }
            champion = i;
        }
    }

    return champion;
    }
};
