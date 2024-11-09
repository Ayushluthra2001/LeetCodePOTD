class Solution {
public:
    long long minEnd(int n, int x) {
        long long ans = x;
        int count = 1;
        while(count < n){
            long long curr = (ans+1) | x;
            ans = curr;
            count++;
           
        }
        return ans;
    }
};
