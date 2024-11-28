class Solution {
public:
    #define p pair<int,pair<int,int>>

    vector<vector<int>>direction = {{0,1}, {0,-1}, {1,0} , {-1,0}};
    int minimumObstacles(vector<vector<int>>& grid) {
        int n =grid.size();
        int m = grid[0].size();

        vector<vector<int>>result(n, vector<int>(m,INT_MAX));

        result[0][0] = 0;

        priority_queue<p,vector<p>,greater<p>>pq;

        pq.push({0,{0,0}});

        while(! pq.empty()){
            p pp = pq.top();
            int i = pp.second.first;
            int j = pp.second.second;
            int d = pp.first;
            pq.pop();
            for(auto dir : direction){
                int x = i+dir[0];
                int y = j+dir[1];
                if(x < 0 || y< 0 || x>=n || y>=m){
                    continue;
                }
                int wt = grid[i][j]  == 1 ?  1 : 0;

                if(d + wt < result[x][y]){
                    result[x][y] = d + wt;
                    pq.push({d+wt,{x,y}});
                }
            }
        }

        return result[n-1][m-1];
    }
};
