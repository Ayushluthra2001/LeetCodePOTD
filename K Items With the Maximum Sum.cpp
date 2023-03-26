class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        int count=0;
        while(k--){
            if(numOnes>0){
                count++;
                numOnes--;
            }else if(numZeros>0) numZeros--;
            else{
                numNegOnes--;
                count--;
            }
        }
        return count;
    }
};
