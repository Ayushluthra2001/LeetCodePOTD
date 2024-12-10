class Solution {
public:
bool check(string temp){
    unordered_map<char,int>mapping;
    for(int i = 0; i<temp.length();i++) mapping[temp[i]]++;
    
    return mapping.size()==1 ? true : false;

}
    int maximumLength(string s) {
       
        int maxLength = 0;
        unordered_map<string,int>mapping;
        for(int i = 0; i<s.length();i++){
            string temp ="";
            for(int j = i;j<s.length();j++){
                temp+=s[j];
                mapping[temp]++;
            }
        }
        for(auto i : mapping){
            
            int currLength = i.first.length();
                if(i.second>=3 && check(i.first)) maxLength = max(maxLength, currLength);
        }
        return maxLength ==0 ? -1 : maxLength;

    }
};
