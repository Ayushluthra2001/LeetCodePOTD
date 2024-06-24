class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        vector<bool> fliped(nums.size(),0);

        int result    = 0;
        int flipCount = 0;

        int c=0;
        for(int i = 0; i < nums.size(); i++){
           
            if(i>=k && fliped[i-k] == true) flipCount--;

            if(flipCount % 2 == nums[i]) {

                if(i + k > nums.size()) return -1;
                flipCount++;
                fliped[i] = true;
                result++;
            }
        }

        return result;
    }
};
