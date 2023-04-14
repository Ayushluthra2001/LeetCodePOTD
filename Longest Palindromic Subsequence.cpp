class Solution {
public:
    bool check(string temp){
        int start=0;
        int end=temp.length()-1;
        while(start<=end){
            if(temp[start]!=temp[end]) return false;
            start++;
            end--;
        }
        return true;
    }
    int solve(string s, int index,string temp){
        if(index>=s.length()) return 0;
        if(index==s.length()-1){
            int maxi=0;
            if(check(temp)) {
                int l=temp.length();
                maxi=max(maxi,l);
            }
            if(check(temp+s[index])) {
                int l=temp.length()+1;
                maxi=max(maxi,l);
            }
            return maxi;
        }
        
        int include=solve(s,index+1,temp+s[index]);
        
        int exclude=solve(s,index+1,temp);
        return max(include,exclude);
    }
    int longestPalindromeSubseq(string s) {
     int maxi=0;
     maxi= solve(s,0,"");
     return maxi;   
    }
};
