class Solution {
public:
int getSum(int x){
    int sum = 0;
    while(x > 0){
        sum += x%10;
        x = x/10;
    }

    return sum;
}
    int minElement(vector<int>& nums) {
        int mini = INT_MAX;

        for(int i = 0; i<nums.size(); i++){
            int Sum = getSum(nums[i]);
            mini = min(mini , Sum);
        }
        return mini;
    }
};
