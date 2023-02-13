class Solution {
public:
    int countOdds(int low, int high) {
        int count=0;
        if(low%2==0){
            low++;
        }
        if(high%2==0){
            high--;
        }
        count+=(high-low)/2+1;

        return count;
    }
};
