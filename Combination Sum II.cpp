class Solution {
public:

    void solve(vector<int>&candidates , int n,int target,vector<vector<int>>&ans,vector<int>temp,int index){
        if(index>=n || target <=0){
            if(target==0) {
               
                ans.push_back(temp);
               
            }
            return;

        }
         
       for(int i=index;i<n;i++){
            if( i > index && candidates[i] == candidates[i-1]){
                continue;
            }else{
                temp.push_back(candidates[i]);
                solve(candidates,n,target-candidates[i],ans,temp,i+1);
                temp.pop_back();
            }
       }
       
    
        
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
