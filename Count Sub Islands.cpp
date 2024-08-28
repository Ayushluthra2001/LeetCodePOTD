class Solution {
public:

    bool dfs(vector<vector<int>>& grid1, vector<vector<int>>& grid2, int n, int m, int i, int j, vector<vector<int>>& visited) {
    if (i >= n || j >= m || i < 0 || j < 0 || visited[i][j] == 1 || grid2[i][j] == 0) 
        return true;
    
    visited[i][j] = 1;

    bool isSubIsland = (grid1[i][j] == 1);

    isSubIsland &= dfs(grid1, grid2, n, m, i + 1, j, visited);
    isSubIsland &= dfs(grid1, grid2, n, m, i, j + 1, visited);
    isSubIsland &= dfs(grid1, grid2, n, m, i - 1, j, visited);
    isSubIsland &= dfs(grid1, grid2, n, m, i, j - 1, visited);

    return isSubIsland;
}

int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
    int count = 0;

    int n = grid1.size();
    int m = grid1[0].size();
    vector<vector<int>> visited(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid2[i][j] == 1 && visited[i][j] == false) {
                if (dfs(grid1, grid2, n, m, i, j, visited)) {
                    count++;
                }
            }
        }
    }

    return count;
}

};
