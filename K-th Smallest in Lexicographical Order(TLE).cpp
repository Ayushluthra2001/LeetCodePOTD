class Solution {
public:
    int findKthNumber(int n, int k) {
        vector<string>ans;

        for(int i = 1;i<=n;i++){
            ans.push_back(to_string(i));
        }
        sort(ans.begin(),ans.end());
        return stoi(ans[k-1]);


    }
};
