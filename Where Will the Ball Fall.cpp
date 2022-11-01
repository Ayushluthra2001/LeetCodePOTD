class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        
        int n=grid.size();
        int m=grid[0].size();
        vector<int>ans(m,-1);
        for(int j=0;j<m;j++){
            int currpos=j;
            int nexpos=-1;
            for(int i=0;i<n;i++){
                 nexpos=currpos+grid[i][currpos];
                if(nexpos<0 || nexpos>=m || grid[i][currpos]!=grid[i][nexpos]) {
                    currpos=-1;
                    break;
                }
                currpos=nexpos;
            }
            ans[j]=currpos;
            
        }
        return ans;
    }
};
