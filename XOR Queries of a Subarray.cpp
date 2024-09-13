class Solution {
public:
    int getXOR(int left , int right , vector<int>& arr){
        int x  = arr[left];
        for(int i  = left+1; i<=right; i++){
            x = x ^ arr[i];
        }
        return x;
    }
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>ans;


        for(int i = 0; i < queries.size(); i++){
            int left = queries[i][0];
            int right = queries[i][1];

            int get = getXOR(left , right , arr);

            ans.push_back(get);
        }
        return ans;
    }
};
