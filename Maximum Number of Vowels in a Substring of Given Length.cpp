class Solution {
public:
    int maxVowels(string s, int k) {
        string vowel="aeiou";
        int count=0;
        int maxi=0;
        for(int i=0;i<s.length() && i<k;i++){
            if(find(vowel.begin(),vowel.end(),s[i])!=vowel.end()){
                count++;
            }
        }
        maxi=max(count,maxi);
        for(int i=k;i<s.length();i++){
            if(find(vowel.begin(),vowel.end(),s[i-k])!=vowel.end()){
                count--;
            }
            if(find(vowel.begin(),vowel.end(),s[i])!=vowel.end()){
                count++;
            }
            maxi=max(maxi,count);
        }
        return maxi;
    }
};
