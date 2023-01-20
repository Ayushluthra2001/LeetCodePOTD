class Solution {
public:
set<vector<int>>s;
void backTrack(vector<int>&nums, int index, vector<int>temp){
    if(index>=nums.size()){
        if(temp.size()>=2){
            s.insert(temp);
        }
        return ;
    }
    int curr=nums[index];
    int prev;
    if(temp.size()==0){
        prev=-101;
    }else{
        prev=temp[temp.size()-1];
    }
    if(curr>=prev){
        temp.push_back(curr); 
        backTrack(nums,index+1,temp);
        temp.pop_back();
        backTrack(nums,index+1,temp);   
    }else{
        
        backTrack(nums,index+1,temp);
        
    }
}
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        
        vector<int>temp;
        backTrack(nums,0,temp);
        vector<vector<int>>ans;
        for(auto i : s){
            ans.push_back(i);
        }
        return ans; 
    }
};
