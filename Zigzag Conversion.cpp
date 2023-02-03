class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows<2) return s;
        vector<vector<char>>ans(numRows,vector<char>(s.length(),'0'));
        int row=0,c=1;
        for(int i=0;i<s.length();i++){
          ans[row][i]=s[i];
          if(row==numRows-1) c=-1;
          if(row==0) c=1;
          row+=c;
        }
        string res="";
        for(auto i : ans){
            for(auto j : i){
                if(j!='0')
                    res+=j;
            } 
            
        }
        return res;
    }
};
