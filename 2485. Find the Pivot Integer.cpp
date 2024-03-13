class Solution {
public:
    int pivotInteger(int n) {
        int start=1;
        int end=n;
        while(start<=end){
            int sum1=0;
            int sum2=0;
            for(int i=1;i<=start;i++){
                sum1+=i;
            }
            for(int i=start;i<=end;i++){
                sum2+=i;
            }
            if(sum1==sum2) return start;
            start++;
        }
        return -1;
    }
};

