class Solution {
public:
    int minimumDeletions(string s) {
        stack<char>st;
        
        int count1=0;
        
        int i=1;
        st.push(s[0]);
        while(i<s.length()){
            char currCh = s[i];
            if(!st.empty() && st.top()=='b' && currCh=='a'){
                count1++;
                st.pop();
               
            }else{
                st.push(currCh);
            }
            i++;
        }

        
        
        return count1;
    }
};
