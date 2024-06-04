class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mapping;
        for(auto i : s) mapping[i]++;
        bool onlyOneOdd=0;
        int rest=0;
        for(auto i: mapping){
            if(i.second%2!=0) {
                rest+=i.second-1;
                onlyOneOdd=true;
            }
            else if(i.second%2==0)rest+=i.second;
        }
        return rest+onlyOneOdd;

    }
    
};
