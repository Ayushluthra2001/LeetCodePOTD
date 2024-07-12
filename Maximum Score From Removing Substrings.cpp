class Solution {
public:
string removeSub(string& s, string& match){
    stack<char>st;
    for(auto ch : s){
        if(ch== match[1] && !st.empty() && st.top()==match[0]){
            st.pop();
        }else{
            st.push(ch);
        }
    }
    string temp;
    while(!st.empty()){
        temp.push_back(st.top());
        st.pop();
    }

    reverse(temp.begin(),temp.end());
    return temp;
}
    int maximumGain(string s, int x, int y) {
        int n = s.length();

        int score =0;
        string temp1 = (x>y) ? "ab"  : "ba";
        string temp2 = (x<y) ? "ab"  : "ba";

        string temp_first = removeSub(s,temp1);
        int l = temp_first.length();
        int charRemoved = (n-l);
        score+=(charRemoved/2)*max(x,y);

        string temp_second= removeSub(temp_first,temp2);
        
        charRemoved = l-temp_second.length();

        score+= (charRemoved/2) * min(x,y);
        return score;
    }
};
