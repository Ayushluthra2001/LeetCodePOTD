class Solution {
public:
    int solve(int n){
        int pro = 1;
        while(n > 0){
            pro = pro * (n%10);
            n = n/10;
        }
        return  pro;
    }
    int smallestNumber(int n, int t) {
        int get_product =solve(n);
        while(get_product % t != 0){
            n++;
            get_product = solve(n);

        }

        return n;
    }
};
