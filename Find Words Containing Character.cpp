class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>ans;


        for(int i = 0; i<words.size(); i++){
            bool find = false;
            for(int j = 0; j<words[i].length(); j++){
                if(words[i][j] == x) find = true ;
            }
            if(find) ans.push_back(i);

        }
        return ans;
    }
};
