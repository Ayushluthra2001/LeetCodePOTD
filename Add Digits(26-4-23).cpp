class Solution {
public:
    int addDigits(int num) {
        if(num==0) return 0;
        while(num>9){
            int sum=0;
            int n=num;
            while(n>0){
                sum+=n%10;
                n=n/10;
            }
            num=sum;
        }
        return num;
    }
};
