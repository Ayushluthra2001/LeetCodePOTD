class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>ans(26,0);
        for(int i=0;i<sentence.length();i++){
            ans[sentence[i]-'a']=1;
        }
        for(int i=0;i<ans.size();i++){
            if(ans[i]!=1) return false;
        }
        return true;
    }
};
