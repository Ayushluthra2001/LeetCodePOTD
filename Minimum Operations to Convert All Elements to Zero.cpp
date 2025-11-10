class Solution {
public:
    int minOperations(vector<int>& nums) {
        stack<int>s;
        int count = 0;
        for(int i = 0; i<nums.size();i++){
            // s.push(nums[i]);
            while(!s.empty() && s.top() > nums[i]) s.pop();
            if(nums[i] == 0 ) continue;
            if(s.empty() ||  s.top() <  nums[i] ) {
                s.push(nums[i]);
                count++;
            }
        }

        return count;
    }
};
