class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char,int>mapping1;
        unordered_map<char,int>mapping2;
        unordered_map<char,int>lastIndex;
        unordered_map<char,int>firstIndex;
        // storing lowercase first index
        for(int i =0; i<word.length(); i++){
            if(word[i]>='a' && word[i]<='z'){
                if(mapping1.find(word[i]) == mapping1.end())
                 mapping1[word[i]] = i;
                 lastIndex[word[i]] = i;
            }
        }

        // storing upper case last index
        for(int i =0; i<word.length(); i++){
             if(word[i]>='A' && word[i]<='Z'){
                if(firstIndex.find(word[i]) == firstIndex.end()) firstIndex[word[i]] = i;
               mapping2[word[i]] = i;
            }
        }

        int result = 0;
        for(auto i : mapping1){
            char ch = toupper(i.first);
            int index1 = i.second;
            if(mapping2.find(ch)!= mapping2.end()){
                int index2 = mapping2[ch];
                if(index2 > index1 && lastIndex[i.first] < index2 && firstIndex[ch] > lastIndex[i.first]){
                   result++;
                }
            }
        }

        return result;
    }
};
