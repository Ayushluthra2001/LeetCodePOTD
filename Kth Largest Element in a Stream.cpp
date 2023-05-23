class KthLargest {
public:
    vector<int>ans;
    int l;
    KthLargest(int k, vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            ans.push_back(nums[i]);

        }
        
        l=k;
    }
    
    int add(int val) {
        ans.push_back(val);
        sort(ans.begin(),ans.end());
        return ans[ans.size()-l];
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
