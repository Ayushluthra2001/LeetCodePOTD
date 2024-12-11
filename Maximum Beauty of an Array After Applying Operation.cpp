class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        map<int,int>mp; 
        for(int i=0;i<nums.size();i++) 
        { 
            mp[nums[i]-k]++; 
            mp[nums[i]+k+1]--; 
        } 
        int temper=0; 
        int ans=0; 
        for(auto i:mp) 
        { 
            temper+= i.second; 
            ans=max(ans,temper); 
        } 
        return ans; 
    }
};
