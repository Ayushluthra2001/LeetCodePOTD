class Solution {
public:
    int solve(int n){
    if(n<0) return 0;
    if(n==0) return 1;
    int first=solve(n-1);
    int second=solve(n-2);
    return first+second;
}
    int climbStairs(int n) {
        return solve(n);
    }
};
