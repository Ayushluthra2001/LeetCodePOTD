class Solution {
public:
    void reverse(string &temp){
        int start=0;
        int end=temp.length()-1;
        while(start<=end){
            swap(temp[start],temp[end]);
            start++;
            end--;
        }
    }
    string reverseWords(string s) {
        int i=0;
        string ans="";
        while (i<s.length()){
            int j=i;
            string temp="";
            while(j<s.length() && s[j]!=' '){
                temp+=s[j++];
            }
            reverse(temp);
            ans+=temp;
            ans+=' ';
            i=j+1;
        }
        ans.pop_back();
        return ans;
    }
};
