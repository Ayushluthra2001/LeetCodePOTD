class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>ans;
        int i=0;
        while(i<nums.size()){
            int first=nums[i];
            int last=nums[i];
            int j=i+1;
            
            while(j<nums.size() &&  (long long)nums[j]-(long long)nums[j-1]==1){
                last=nums[j];
                j++;
            }
            if(first!=last){
                ans.push_back(to_string(first)+"->"+to_string(last));
            }else{
                ans.push_back(to_string(first));
            }
            i=j;
        }
        return ans;
    }
};r
