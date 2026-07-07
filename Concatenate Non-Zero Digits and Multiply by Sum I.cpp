class Solution {
public:
    int reverse(int x){
        int ans = 0;
        while( x > 0){
            ans = ans*10 + x%10;
            x = x/10;
        }

        return ans;
    }
    long long sumAndMultiply(int n) {
        long long ans = 0;
        long long sum = 0;
        
        while(n > 0){
            int x = n%10;
            if(x > 0){
                
                sum+=x;
                
                ans =   ans * 10 + x;
               
            }
            n = n/10;
        }

        ans = reverse(ans);
        return ans * sum;
    }
};
