class Solution {
public:
    int minAddToMakeValid(string s) {
          
        int extra = 0;
        int count = 0;
        for(int i =0; i<s.length(); i++){
            if(s[i]=='(') count++; 
            else {
                if(count>0) count--;
                else extra++,count =0;
            }
        }

        
        return count + extra;
    }
};
