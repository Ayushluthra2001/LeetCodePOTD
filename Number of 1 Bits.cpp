class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        while(n>0){
            count+=n%2==1 ? 1:0;
            n=n/2;
        }
        return count;
    }
};
