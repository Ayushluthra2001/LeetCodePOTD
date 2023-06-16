class Solution {
public:
    int dp[1001][1001] = {};
int comb(int n, int m) {
    return n == 0 || m == 0 ? 1 :
        dp[n][m] ? dp[n][m] : 
            dp[n][m] = (comb(n - 1, m) + comb(n, m - 1)) % 1000000007;
}
long dfs(vector<int>& n) {
    if (n.size() <= 1)
        return 1;
    vector<int> n1, n2;
    copy_if(begin(n), end(n), back_inserter(n1), [&] (int i) { return i < n.front(); });
    copy_if(begin(n), end(n), back_inserter(n2), [&] (int i) { return i > n.front(); });
    return dfs(n1) * dfs(n2) % 1000000007 * comb(n1.size(), n2.size()) % 1000000007;
}
int numOfWays(vector<int>& n) { return dfs(n) - 1; }
};
