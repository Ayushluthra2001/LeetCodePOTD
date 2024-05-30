class Solution {
public:
        int countTriplets(vector<int>& A) {
        A.insert(A.begin(), 0);
        int n = A.size(), res = 0;
        for (int i = 1; i < n; ++i)
            A[i] ^= A[i - 1];
        unordered_map<int, int> count, total;
        for (int i = 0; i < n; ++i) {
            res += count[A[i]]++ * (i - 1) - total[A[i]];
            total[A[i]] += i;
        }
        return res;
    }
};
