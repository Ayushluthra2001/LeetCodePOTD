class Solution {
public:
    int countUnguarded(int n, int m, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>> grid(n, vector<int>(m, 0));
       

        
        for (auto& w : walls) grid[w[0]][w[1]] = 1;
        for (auto& g : guards) grid[g[0]][g[1]] = 2;

        
        for (int i = 0; i < n; i++) {
            bool seen = false;
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) seen = false;
                else if (grid[i][j] == 2) seen = true;
                else if (seen) grid[i][j] = 3;
            }
        }

        
        for (int i = 0; i < n; i++) {
            bool seen = false;
            for (int j = m - 1; j >= 0; j--) {
                if (grid[i][j] == 1) seen = false;
                else if (grid[i][j] == 2) seen = true;
                else if (seen) grid[i][j] = 3;
            }
        }

        
        for (int j = 0; j < m; j++) {
            bool seen = false;
            for (int i = 0; i < n; i++) {
                if (grid[i][j] == 1) seen = false;
                else if (grid[i][j] == 2) seen = true;
                else if (seen) grid[i][j] = 3;
            }
        }

       
        for (int j = 0; j < m; j++) {
            bool seen = false;
            for (int i = n - 1; i >= 0; i--) {
                if (grid[i][j] == 1) seen = false;
                else if (grid[i][j] == 2) seen = true;
                else if (seen) grid[i][j] = 3;
            }
        }

        
        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 0) count++;
            }
        }
        return count;
    }
};
