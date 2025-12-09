class Solution {
public:
int mod = 1e9+7;
    int specialTriplets(vector<int>& nums) {
        
        unordered_map<int,int>left;
        unordered_map<int,int>right;
        int result = 0;
        for(int i =0; i<nums.size();i++){
            right[nums[i]]++;
        }
        for(auto i : nums){
            right[i]--;
            
            int l = left[2*i];
            int r = right[2*i];
            result  = (result + (1LL * l * r) ) %mod;
            left[i]++;
        }

        return result;
    }
};
