class Solution {
public:
bool check(int n){
    if(n<0) return false;
    int count=0;
    while(n>0){
        if(n%2==1) count++;
        n=n/2;
    }
    if(count==1) return true;
    return false;
}
    bool isPowerOfTwo(int n) {
       return  check(n);
         
    }
};
