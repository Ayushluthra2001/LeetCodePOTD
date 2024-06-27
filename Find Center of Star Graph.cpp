class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int,int> inDegree;
       
    
        int n = edges.size();
        for(int i = 0; i < n; i++){
            int x = edges[i][0];
            int y = edges[i][1];

            
            inDegree[y]++;
            inDegree[x]++;
        }
        int maxi = 0;
        int ans  = 0;
        for(auto i : inDegree){
            if(maxi < i.second){
                ans  = i.first;
                maxi = i.second;
            }
        }
        return ans;
    }
};
