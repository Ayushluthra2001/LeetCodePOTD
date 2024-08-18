class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int>dp(n);

        dp[0] = 1;

        int first  = 0;
        int second = 0;
        int third  = 0;

        for(int i = 1; i<n; i++){
            
            int multipleOfTwo = dp[first] * 2;
            int multipleOfThree = dp[second] * 3;
            int multipleOfFive = dp[third] * 5;

            int mini = min(multipleOfTwo , min(multipleOfFive, multipleOfThree));

            dp[i] = mini;

            if(dp[i] == multipleOfTwo) first++;
            if(dp[i] == multipleOfThree) second++;
            if(dp[i]  == multipleOfFive) third++;


        }

        return dp[n-1];
    }
};
