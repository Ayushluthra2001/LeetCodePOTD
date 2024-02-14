class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0) pos.push_back(nums[i]);
            else neg.push_back(nums[i]); 
        }
        int i=0;
        int j=0;
        vector<int>ans;
        bool posi=true;
        while(i<pos.size() || j<neg.size()){
            if(posi){
                ans.push_back(pos[i++]);
                posi=false;
            }else{
                ans.push_back(neg[j++]);
                posi=true;
            }
        }
        return ans;
    }
};
