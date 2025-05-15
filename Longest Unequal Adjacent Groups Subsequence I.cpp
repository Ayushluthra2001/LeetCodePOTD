class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string> ans;
        int last = 2;
        for(int i = 0; i < groups.size(); i++){
            if(groups[i] != last){
                ans.push_back(words[i]);
                last = groups[i];
            }
        }
        return ans;
    }
};
