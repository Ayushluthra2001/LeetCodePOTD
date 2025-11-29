class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum = 0;
        for(auto i : nums) sum+= i;
        if(sum%k==0) return 0;

        return min(sum%k , abs(sum-0));
    }
};
