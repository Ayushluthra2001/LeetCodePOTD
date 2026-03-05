class Solution {
public:
    int minOperations(string s) {
        int count = 0;
        for(int i =0; i<s.length(); i++){
            if(i%2) {
                if(s[i] == '0') count++;
                
            }else{
                if(s[i]=='1') count++;
            }
        }
        int x = s.length()-count;
        return min(count , x);
    }
};
