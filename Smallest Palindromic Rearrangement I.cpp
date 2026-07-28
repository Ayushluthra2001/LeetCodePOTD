class Solution {
public:
    string smallestPalindrome(string s) {
        if(s.length() == 1) return s;

        map<char,int>mapping;
        for(auto i : s) mapping[i]++;

        string result = "";
        string temp = "";
        char left='-';
        for(auto i : mapping){
            if(s.length()==1) {
                left = i.first;
                continue;
            }
            else{
                int freq = i.second;
                if(i.second%2!=0) left = i.first;
                for(int j =0; j<freq/2; j++){
                    temp+=i.first;
                }
            }
        }
        

        result += temp;
        reverse(temp.begin(),temp.end());
        if(left != '-') result+=left;
        result+=temp;
        return result;
    }
};
