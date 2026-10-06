class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;  
        int extra = 0;
        for(int i =0; i<s.length(); i++){
            if(s[i]=='(') st.push('(');
            else {
                if(!st.empty()) st.pop();
                else extra++;
            }
        }

        int x = st.size();
        return x + extra;
    }
};
