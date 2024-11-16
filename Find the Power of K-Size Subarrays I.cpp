class Solution {
public:
    int getMax(int i, int j, vector<int>& nums){
        
        int start = i+1;
        int maxi = nums[i];
        while(start <=j){
            if(nums[start] <= nums[start-1] || abs(nums[start]-nums[start-1]) !=1) return -1;
            maxi = max(maxi , nums[start]);
            start++;
        }

        
        return maxi;
    }
    vector<int> resultsArray(vector<int>& nums, int k) {
        
        int i = 0;
        int j = k-1;
        vector<int>ans;

        while(j < nums.size()){

            int maxi = getMax(i, j, nums);
            ans.push_back(maxi);
            i++;
            j++;
        }   



        return ans;
    }
};
