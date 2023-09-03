class Solution {
public:
    int solve(int m ,int n , int i,int j){
        if(i>=m || j>=n) return 0;
        if(i==m-1 && j==n-1) return 1;
        return solve(m,n,i+1,j)+solve(m,n,i,j+1);
    }
    int uniquePaths(int m, int n) {
        
        
        return solve(m,n,0,0);

    }
};
