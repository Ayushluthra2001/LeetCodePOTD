class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        unordered_map<int,int>mapping;
        for(int i = 0; i<queries.size(); i++){
            int start = queries[i][0];
            int end   = queries[i][1];
            for(int j = start; j<=end; j++) mapping[j]++;
        }
        for(int i = 0; i<nums.size(); i++){
            int curr = nums[i];
            if(mapping.find(i) != mapping.end()){
                int dec = mapping[i];
                if(dec >= curr) curr = 0;
                else curr-=dec;
                nums[i] = curr;
            }
        }

        for(int i = 0; i<nums.size(); i++) if(nums[i] != 0) return false;

        return true;
    }
};
