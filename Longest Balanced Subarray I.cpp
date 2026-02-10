class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int maxi = 0;
        for(int i = 0; i< nums.size(); i++){
                unordered_map<int,int>even;
                unordered_map<int,int>odd;
                int count = 0;
            for(int j = i; j<nums.size(); j++){
               
                
                    if(nums[j] % 2 == 0) even[nums[j]]++;
                    else odd[nums[j]]++;
                    count++;
                int length = count;
                if(even.size() == odd.size()) maxi = max(maxi , length);
                
            }
        }

        return maxi;
    }
};
