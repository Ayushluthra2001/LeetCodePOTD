class Solution {
public:
    bool check(int number){
        string n = to_string(number);
        if(n.length() % 2 != 0) return false;
        int start = 0, end = n.length()-1;
        int sum1 = 0, sum2 = 0;
        while(start <= end){
            sum1 += n[start++]-'0';
            sum2 += n[end--]-'0';
        }
        return sum1 == sum2;
    }
    int countSymmetricIntegers(int low, int high) {
        int count = 0;
         while(low<=high){
            if(check(low)) count++;
            low++;
         }

         return count;
    }
};
