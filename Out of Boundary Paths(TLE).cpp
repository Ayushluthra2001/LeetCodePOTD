class Solution {
public:
#define mod 1000000007
int solve( int m ,int n , int  k , int i , int j){
    
    if(i>=m || j>=n || i<0 || j<0 )return 1;
    if(k==0) return 0;
    int left=solve(m,n,k-1,i,j-1)%mod;
    int right=solve(m,n,k-1,i,j+1)%mod;
    int up=solve(m,n,k-1,i-1,j)%mod;
    int down=solve(m,n,k-1,i+1,j)%mod;
    int x= (left+up+down+right)%mod;
    return x;
}
    int findPaths(int m, int n, int k, int i, int j) {
        return solve(m,n,k,i,j);  
    }
};
