class Solution {
public:
    int memo[6][46][2];  // memo[pos][remSum][tightFlag]

    int dfsCount(int pos, int remSum, int tight, const string &digits) {
        int D = digits.size();
        if (pos == D) 
            return remSum == 0;
        int &res = memo[pos][remSum][tight];
        if (res != -1) 
            return res;
        int limit = tight ? digits[pos] - '0' : 9;
        res = 0;
        for (int d = 0; d <= limit; ++d) {
            if (remSum >= d)
                res += dfsCount(pos + 1, remSum - d, tight && (d == limit), digits);
        }
        return res;
    }

    int countLargestGroup(int n) {
        string digits = to_string(n);
        int D = digits.size(), maxSum = 9 * D;
        int best = 0, groups = 0;
        for (int target = 1; target <= maxSum; ++target) {
            memset(memo, -1, sizeof(memo));
            int cnt = dfsCount(0, target, 1, digits);
            if (cnt > best) {
                best = cnt;
                groups = 1;
            } else if (cnt == best) {
                ++groups;
            }
        }
        return groups;
    }
};
