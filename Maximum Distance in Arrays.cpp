class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int mini = arrays[0][0];
        int maxi = arrays[0][arrays[0].size()-1];
        int ans = INT_MIN;
        for(int i=1; i<arrays.size(); i++){
            int currMini = arrays[i][0];
            int currMaxi = arrays[i][arrays[i].size()-1];

            int first  = currMaxi - mini;
            int second = maxi - currMini;


            mini = min(mini, currMini);
            maxi = max(maxi, currMaxi);
            ans = max(ans, max(first,second));

        }

        return ans;
    }
};
