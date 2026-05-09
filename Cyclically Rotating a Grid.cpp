class Solution {
public:
    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        int layers = min(n , m)/2;

        for(int layer = 0; layer<layers; layer++){

            int top    = layer;
            int bottom = m-1-layer;
            int left   = layer;
            int right  = n-1-layer;

            vector<int>values;
            // left to right;
            for(int i = left; i<=right; i++){
                values.push_back(grid[top][i]);
            }
            // up to down
            for(int i = top+1; i<=bottom-1; i++){
                values.push_back(grid[i][right]);
            }
            // right to left
            for(int i = right; i>=left; i--){
                values.push_back(grid[bottom][i]);
            }
            // down to up
            for(int i = bottom-1; i>=top+1; i--){
                values.push_back(grid[i][left]);
            }
            int length = values.size();
                int times = k%length;
            
            rotate(begin(values),begin(values) + times , end(values));

            int j = 0;
            for(int i = left; i<=right; i++){
                grid[top][i] = values[j++];
            }
            // up to down
            for(int i = top+1; i<=bottom-1; i++){
                grid[i][right] = values[j++];
            }
            // right to left
            for(int i = right; i>=left; i--){
                grid[bottom][i] = values[j++];
            }
            // down to up
            for(int i = bottom-1; i>=top+1; i--){
                grid[i][left] = values[j++];
            }
        }


        return grid;
    }
};
