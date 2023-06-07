class Solution {
public:
    int minFlips(int a, int b, int c) {
        int ans=0;
        while(c || a|| b){
            if(c&1){
                if( (a&1)==0 && (b&1)==0 )ans++;
            }
            else{
                if(a&1 && b&1)ans+=2;
                else if(a&1 || b&1)ans++;
            }
            c>>=1;b>>=1;a>>=1;
        }
        return ans;
    }
};
