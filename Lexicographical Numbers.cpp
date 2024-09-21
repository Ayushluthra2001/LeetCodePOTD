class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int>ans;
        vector<string>strings;
        for(int i =1;i<=n;i++){
            strings.push_back(to_string(i));
        }
        sort(strings.begin(),strings.end());
        for(auto i : strings){
            ans.push_back(stoi(i));
        }

        return ans;
    }
};
