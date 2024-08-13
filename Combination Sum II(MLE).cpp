class Solution {
public:

    void solve(vector<int>&candidates , int n,int target,vector<vector<int>>&ans,vector<int>temp,int index){
        if(index>=n || target <=0){
            if(target==0) {
                if(find(ans.begin(),ans.end(),temp)==ans.end())ans.push_back(temp);
               
            }
            return;
        }
        

        temp.push_back(candidates[index]);
        solve(candidates,n,target-candidates[index],ans,temp,index+1);
        temp.pop_back();
        solve(candidates,n,target,ans,temp,index+1);
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        int n = candidates.size();

        vector<vector<int>>ans;

        
        vector<int>temp;
        sort(candidates.begin(),candidates.end());
        solve(candidates,n,target,ans,temp,0);

        return ans;
    }
};
