class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>mapping;


        for(int i=0;i<s.length();i++){
            
            mapping[s[i]]++;
        }
        for(int i=0;i<s.length();i++){
            if(mapping[s[i]]==1) return i;
        }
        return -1;
    }
};
