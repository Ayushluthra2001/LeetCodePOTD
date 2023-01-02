class Solution {
public:
    bool detectCapitalUse(string word) {
        int countLower=0;
        int countUpper=0;
        for(auto i : word){
            if(isupper(i)) countUpper++;
            if(islower(i)) countLower++;
        }
        if(countLower==word.length()-1 && countUpper==1 && isupper(word[0])) return true;
        if(countLower==0 && countUpper==word.length()) return true;
        if(countLower==word.length() && countUpper==0) return true;
        return false;
    }
};
