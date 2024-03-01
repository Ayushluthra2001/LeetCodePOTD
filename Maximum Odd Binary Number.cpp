class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int count=0;
        for(auto i :s){
            count+=i-'0'==1?1:0;
        }
        // cout<<count<<endl;
        if(count==0) return s;
        
        string temp="";
        
        int k=0;
        while(count>=2 && k<s.length()-1){
            k++;
            count--;
            temp+='1';
            
        }
        while(k<s.length()) temp+='0',k++;
        temp[temp.length()-1]='1';
        return temp;
     }
};
