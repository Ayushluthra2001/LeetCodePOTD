class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        map<pair<int,int>, int> freq;
        int count = 0;
        
        for (auto& d : dominoes) {
            int a = min(d[0], d[1]);
            int b = max(d[0], d[1]);
            pair<int, int> key = {a, b};
            
            
            count += freq[key];
            
            
            freq[key]++;
        }
        
        return count;
    }
};
