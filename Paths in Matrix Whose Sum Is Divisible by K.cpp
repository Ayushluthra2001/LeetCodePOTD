class Solution {
public:
    int mod = 1e9+7;

    int solve(vector<vector<int>>& grid, int k, int i, int j, int rem,
              vector<vector<vector<int>>>& dp) {

        int n = grid.size(), m = grid[0].size();

        if (i == n-1 && j == m-1)
            return ((rem + grid[i][j]) % k == 0);

        if (dp[i][j][rem] != -1)
            return dp[i][j][rem];

        long long ways = 0;

        int newRem = (rem + grid[i][j]) % k;

        if (i + 1 < n)
            ways += solve(grid, k, i+1, j, newRem, dp);

        if (j + 1 < m)
            ways += solve(grid, k, i, j+1, newRem, dp);

        return dp[i][j][rem] = ways % mod;
    }

    int numberOfPaths(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<vector<int>>> dp(
            n, vector<vector<int>>(m, vector<int>(k, -1))
        );

        return solve(grid, k, 0, 0, 0, dp);
    }
};
