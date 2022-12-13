class Solution {
public:
    int solve(vector<vector<int>>& matrix,int i,int j){
        if(j<0 || j>=matrix[0].size()) return 1e9;
        if(i==0){
            return matrix[i][j];
        } 
        int up=matrix[i][j]+solve(matrix,i-1,j);
        int left=matrix[i][j]+solve(matrix,i-1,j-1);
        int right=matrix[i][j]+solve(matrix,i-1,j+1);
        return min(up,min(left,right));
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int minSum=INT_MAX;
        int n=matrix.size();
        int m=matrix[0].size();

        for(int i=0;i<m;i++){
            minSum=min(minSum,solve(matrix,n-1,i));
        }
        return minSum;
    }
};
