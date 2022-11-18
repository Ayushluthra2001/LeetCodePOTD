class Solution {
public:
    bool isUgly(int n) {
        int number[]={2,3,5};
        for(int i=0;i<3;i++)
            while(n>1 && n%number[i]==0)
                n=n/number[i];
        return n==1;
    }
};
