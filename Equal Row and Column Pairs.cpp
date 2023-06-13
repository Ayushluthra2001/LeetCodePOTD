class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        vector<vector<int>>ans;
        int count=0;
        for(int i=0;i<grid[0].size();i++){
            vector<int>temp;
            for(int j=0;j<grid.size();j++){
                temp.push_back(grid[j][i]);
            }
            ans.push_back(temp);
        }
        for(auto i : grid){
            for(auto j : ans){
                if( i==j) count++;
            }
        }
        
        return count;
    }
};
