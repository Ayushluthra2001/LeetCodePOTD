class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        int maxi = 0;
        int total = accumulate(begin(nums), end(nums), 0);
        int i = 0;
        int j = 0;
        int currOnes = 0;
        int maxOnes  = 0;
        while(j < 2*n){
            if(nums[j%n]==1) currOnes+=1;

            if(j-i+1 >  total) {
                currOnes -= nums[i%n];
                i++;
            }

            maxi  = max(maxi,currOnes);
            j++;
        }
        return total - maxi;
    }
};
