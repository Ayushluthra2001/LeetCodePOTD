class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>>ans;
    int l;
    KthLargest(int k, vector<int>& nums) {
        
        for(int i=0;i<k && i<nums.size();i++){
            ans.push(nums[i]);
        }
        for(int i=k;i<nums.size();i++){
            ans.push(nums[i]);
            ans.pop();
        }
        l=k;
    }
    
    int add(int val) {
        ans.push(val);
        if(ans.size()>l)
        ans.pop();
        
        
        return ans.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
