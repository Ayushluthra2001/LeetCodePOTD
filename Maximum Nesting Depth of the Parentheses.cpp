class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        int maxi=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                
                st.push(s[i]);
                int size=st.size();
                maxi=max(maxi,size);
            }else{
                if(s[i]==')' && !st.empty()) st.pop();
            }
        }
        return maxi;
    }
};
