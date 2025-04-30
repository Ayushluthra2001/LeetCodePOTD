class Solution {
public:
int getDigits(int x){
    int c = 0;
    while(x > 0){
        x = x / 10;
        c++;
    }
    return c;
}
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(int i = 0; i<nums.size(); i++){
            int  c  = getDigits(nums[i]);
            if( c % 2 == 0) count++;
        }
        return count;
    }
};
