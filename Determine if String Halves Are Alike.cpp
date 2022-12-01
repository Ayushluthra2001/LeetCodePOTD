class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.length();
        int mid=n/2;
        int count1=0,count2=0;
        for(int i=0;i<mid;i++){
            if(s[i]=='A' || s[i]=='E' || s[i]=='O' || s[i]=='U' || s[i]=='I'  || s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='u' || s[i]=='i') count1++;
        }
        
        for(int i=mid;i<n;i++){
            if(s[i]=='A' || s[i]=='E' || s[i]=='O' || s[i]=='U' || s[i]=='I' || s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='u' || s[i]=='i') count2++;
        }
        return count1==count2;
    }
};
