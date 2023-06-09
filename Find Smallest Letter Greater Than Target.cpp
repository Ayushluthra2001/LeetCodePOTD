class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ans=' ';
        int mini=INT_MAX;
        for(int i=0;i<letters.size();i++){
            int a=target-'a';
            int b=letters[i]-'a';
            
             if( a<b && mini>letters[i]-'a' ){
                
                ans=letters[i];
                mini=letters[i]-'a';
            }
        }
        return ans==' ' ? letters[0] : ans;
    }
};
