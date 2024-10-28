class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        unordered_map<int,int>mapping;
        int ans = 0;
        for(auto i : nums){
            int root = (int )sqrt(i);

            if( root * root == i && mapping.find(root) != mapping.end()){
                mapping[i]  = mapping[root]+1;
            }else{
                mapping[i] = 1;
            }
            ans = max(ans, mapping[i]);
        }

        return ans <2 ? -1 : ans;
    }
};
