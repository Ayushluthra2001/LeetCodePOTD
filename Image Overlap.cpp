class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n = img1.size(), ret = 0, currOverlap;
        vector<unsigned int> bits1(n,0), bits2(n,0);
        // convert to arrays of bits
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                bits1[i] = (bits1[i] << 1) | img1[i][j];
                bits2[i] = (bits2[i] << 1) | img2[i][j];
            }
        }
        // try all possible translations
        for (int i = 1-n; i < n; i++) {
            for (int j = 1-n; j < n; j++) {
                // for this translation, compute the overlap
                currOverlap = 0;
                for (int k = 0, l = i; k < bits1.size(); k++, l++) {
                    if (l >= 0 && l < n) {
                        if (j < 0) currOverlap += __builtin_popcount(bits1[k] & (bits2[l] << -j));
                        else currOverlap += __builtin_popcount(bits1[k] & (bits2[l] >> j)); 
                    }
                }
                ret = max(ret, currOverlap);
            }
        }
        return ret;
    }
};
