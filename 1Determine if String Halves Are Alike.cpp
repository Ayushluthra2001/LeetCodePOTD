class Solution {
public:
    bool halvesAreAlike(string s) {
        
        int mid=s.length()/2;
        int countVowelOne=0,countVowelTwo=0;
        for(int i=0;i<s.length();i++){
            if(i<mid){
                if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U' ) countVowelOne++;
            }else{
                    if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U' ) countVowelTwo++;
            }
        }
        return countVowelOne==countVowelTwo;
    }
};
