class Solution {
public:
    int maxDepth(string st) {
        stack<char>s;
        int maxSize =0;
        for(int i =0; i<st.length(); i++){
            if(st[i]=='('){
                s.push(st[i]);
            }else if(st[i]==')'){
                int size = s.size();
                maxSize = max(maxSize,size);
                s.pop();
            } 

        }
        return maxSize;
    }
};
