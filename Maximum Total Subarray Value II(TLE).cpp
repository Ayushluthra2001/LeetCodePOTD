class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long sum = 0;
        vector<int>subarraySum;
        for(int i =0; i<nums.size(); i++){
            int currMaxi = INT_MIN;
            int currMini = INT_MAX;
            for(int j = i; j<nums.size(); j++){
                
                
                    currMaxi = max(currMaxi , nums[j]);
                    currMdini = min(currMini , nums[j]);

                

                subarraySum.push_back(currMaxi - currMini);
            }
        }
        sort(subarraySum.begin(),subarraySum.end(),greater<int>());

        for(int i = 0; i<k && i < subarraySum.size(); i++){
            sum+= subarraySum[i];
        }
        return sum;
    }
};
