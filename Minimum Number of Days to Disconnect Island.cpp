class Solution {
public:
    int n, m;
    
    void dfs(int i, int j, vector<vector<bool>>& vis, vector<vector<int>>& grid) {
        if (i >= n || j >= m || i < 0 || j < 0 || vis[i][j] || grid[i][j] == 0) 
            return;
        
        vis[i][j] = true;
        dfs(i + 1, j, vis, grid);
        dfs(i, j + 1, vis, grid);
        dfs(i - 1, j, vis, grid);
        dfs(i, j - 1, vis, grid);
    }
    
    int noOfIsland(vector<vector<int>>& grid) {
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        int count = 0;
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1 && !vis[i][j]) {
                    count++;
                    dfs(i, j, vis, grid);
                }
            }
        }
        
        return count;
    }
    
    int minDays(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();        
        int initialIslands = noOfIsland(grid);

        
        if (initialIslands > 1 || initialIslands == 0) return 0;

        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    grid[i][j] = 0; 
                    int newIslands = noOfIsland(grid);
                    if (newIslands > 1 || newIslands == 0) return 1; 
                    grid[i][j] = 1; 
                }
            }
        }

       
        return 2;
    }
};
