class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int neighbor = 0;
        int island = 0;
        for (int row = 0; row < grid.size(); ++row) {
            for (int col = 0; col < grid[row].size(); ++col) {
                if (grid[row][col] == 1) {
                    island++;
                    if (row != 0 && grid[row - 1][col] == 1) ++neighbor;
                    if (col != 0 && grid[row][col - 1] == 1) ++neighbor;
                }
            }
        }
        return island * 4 - 2 * neighbor;
    }
};
