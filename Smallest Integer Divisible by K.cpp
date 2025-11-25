class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if(k%2==0) return -1;
        if(k%5==0) return -1;
         
        int temp = 1;
        int count = 1;
        while(true){
            int x = (temp%k);
            if(x%k==0) return count;
            temp = (temp*10)%k + 1;
            count++;
        }
        return -1;
    }
};
