class Solution {
public:
    bool isSubsequence(string s, string t) {
        unordered_map<int,int>mapping;
        int i=0;
        int j=0;
        while(i<s.length() && j<t.length()){
            if(s[i]==t[j]) i++,j++;
            else j++;

        }
        if(i==s.length()) return true;
        return false;
    }
};
