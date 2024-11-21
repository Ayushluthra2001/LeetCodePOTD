class Solution {
public:
    int countUnguarded(int n, int m, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>> matrix(n, vector<int>(m, 0));
        
        for (auto& wall : walls)
            matrix[wall[0]][wall[1]] = -2;
        for (auto& guard : guards)
            matrix[guard[0]][guard[1]] = -1;
        
        vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        
        for (auto& guard : guards) {
            for (auto& dir : directions) {
                int x = guard[0], y = guard[1];
                while (true) {
                    x += dir.first;
                    y += dir.second;
                    if (x < 0 || x >= n || y < 0 || y >= m || matrix[x][y] == -2 || matrix[x][y] == -1)
                        break;
                    if (matrix[x][y] == 0)
                        matrix[x][y] = 1;
                }
            }
        }
        
        int count = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (matrix[i][j] == 0)
                    count++;
        
        return count;
    }
};
