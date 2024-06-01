class Solution {
public:
    int scoreOfString(string s) {
        int score=0;
        for(int i=1;i<s.length();i++){
            int x=s[i]-'a';
            int y=s[i-1]-'a';
            score+=abs(x-y);
        }
        return score;
    }
};
