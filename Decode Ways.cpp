class Solution {
public:
    int numDecodings(string s) {
        if (s.front() == '0') return 0;
        int n = s.size(); 
        vector<int> dp(n + 1);
        dp[0] = 1;
        for (int i = 1; i <= n; i++) {
            if (s[i - 1] != '0') dp[i] = dp[i - 1];
            if (i >= 2) {
                // or you can use `stoi(s.substr(i - 2, 2))`
                int x = (s[i - 2] - '0') * 10 + s[i - 1] - '0';
                // check the range
                if (10 <= x && x <= 26) dp[i] += dp[i - 2];
            }
        }
        return dp[n];
    }
};
