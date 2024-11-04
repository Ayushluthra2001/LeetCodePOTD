class Solution {
public:
    string compressedString(string word) {
        int i = 0;
        string result = "";
        while(i < word.length()){
            int count = 1;
            int j = i+1;
            while(j < word.length() && word[i] == word[j] && count <9){
                count++;
                j++;
            }
            result += to_string(count) + word[i];
            i = j;
        }

        return result;
    }
};
