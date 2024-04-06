class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string res="";
        stack<int>st;
        unordered_set<int>mapping;

        for(int i=0;i<s.length();i++){
            if(s[i]=='(') st.push(i);
            else if(s[i]==')'){
                if(st.empty()){
                    mapping.insert(i);
                }else st.pop();
            }

        }
        while(!st.empty()){
            mapping.insert(st.top());
            st.pop();
        }
        for(int i=0;i<s.length();i++){
            if(mapping.find(i)==mapping.end()) res+=s[i];
        }
        return res;
    }
};
