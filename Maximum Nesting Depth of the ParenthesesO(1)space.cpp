class Solution {
public:
    int maxDepth(string s) {
        int curr=0;
        int maxi=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                
                curr++;
                
                maxi=max(maxi,curr);
            }else{
                if(s[i]==')' && curr>0) curr--;;
            }
        }
        return maxi;
    }
};
