class Solution {
public:
        int concatenatedBinary(int n) {
        long long int val = 0;
        int i=1;
        while(i<=n)
        {
            
            // 1+log2(i) helps us to get number of left shift we have to do 
        
            val = ((val << (1+int(log2(i))))%1000000007+i)%1000000007;
            i+=1;
        }
        return val;

    }
};
/*
ex 5;
how log2 base works to find  no of bits ? The no of bit in 5 is 3 that is 101 that we know  but how log2 works
This is how it works we are doing 1+log2(5) 
log2 base gives us  logarithmic value
in which log2 will return 2 so no of bits in 5 =(2+1)=3.
values      binaary representation      no of shift     our ans
1           1                           0               0*0*0+1=1
2           10                          2               1*2*2+2=6
3           11                          2               6*2*2+3=27
4           100                         3               27*2*3+4=220   
5           101                         3               220*2*3+5=1765

*/

