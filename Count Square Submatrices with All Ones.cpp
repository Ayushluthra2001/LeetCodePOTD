class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>>dp(n, vector<int>(m,0));

        for(int i = 0;i<n;i++){
            if(matrix[i][0]==1)dp[i][0] = 1;
        }
        for(int i  = 0;i<m;i++){
            if(matrix[0][i] ==1) dp[0][i] = 1;
        }

        for(int i= 1;i<n;i++){
            for(int j = 1;j<m;j++){
                if(matrix[i][j]==1){
                    int mini = min(dp[i-1][j] , min(dp[i-1][j-1] , dp[i][j-1]));
                    dp[i][j] = mini+1;
                }else if(matrix[i][j]==0) {
                    dp[i][j]=0;
                }
            }
        }
        int total = 0;
        for(auto i : dp){
            for(auto j : i) total +=j;
        }
        return total; 
    }
};
