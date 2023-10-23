class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1) return 1;
        while(n>0 && n%4==0){
            n=n/4;
        }
        if(n==4 || n==1)return true;
        return false; 
    }
};
