class Solution {
public:
    int partitionString(string s) {
        int count=0;
        unordered_map<char,int>mapping;
        for(int i=0;i<s.length();i++){
            if(mapping[s[i]]){
                count++;
                mapping.clear();
                mapping[s[i]]++;
            }else{
                mapping[s[i]]++;
            }
        }
        
        return count+1;
    }
};
