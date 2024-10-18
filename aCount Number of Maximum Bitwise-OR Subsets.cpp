class Solution {
public:
void solve(vector<int>& nums, unordered_map<int,int>&mapping , int index, int orr){
    if(index >= nums.size()) {
        mapping[orr]++;
        return;
    }

    solve(nums, mapping, index+1, orr|nums[index]);
    solve(nums, mapping, index+1, orr);
    return; 

    
}
    int countMaxOrSubsets(vector<int>& nums) {
        

        unordered_map<int,int>mapping;

        solve(nums,mapping,0,0);

        int maxi = 0;
        int freq = 0;

        for(auto i : mapping) {
            if(i.first > maxi){
                maxi  = i.first;
                freq = i.second;
            }
        }
        return freq;
    }
};
