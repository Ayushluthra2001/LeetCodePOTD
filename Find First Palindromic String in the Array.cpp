class Solution {
public:
bool check(string word){
    int start=0,end=word.length()-1;
    while(start<=end){
        if(word[start]!=word[end]) return false;
        start++;
        end--;
    }
    return true;
}
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            if(check(words[i])) return words[i];
        }
        return "";
    }
};
