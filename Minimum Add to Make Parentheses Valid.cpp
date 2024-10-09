class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        int closing  = 0;
        for(int i = 0;i<s.length();i++){
            if(s[i]=='(') st.push(s[i]);
            else {
                if(!st.empty() && st.top()=='(' && s[i]==')') st.pop();
                else if(st.empty() && s[i]==')') closing++;
            }
        }

        return st.size() + closing ;
    }
};
