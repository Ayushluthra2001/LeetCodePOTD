class Solution {
public:
    bool judgeSquareSum(int c) {
        long long start=0,end=sqrt(c);
        while(start<=end){
            long long  curr=start*start+end*end;
            if(curr==c) return true;
            else if(curr>c) end--;
            else start++;

        }
        return false;
    }
};
