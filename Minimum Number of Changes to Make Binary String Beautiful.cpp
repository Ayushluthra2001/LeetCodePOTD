class Solution {
public:
    int minChanges(string s) {
        int i =0;
        int len  =0;
        int total = 0;
        char prev = s[0];
       for(int i = 0;i<s.length();i++){
           
           if(s[i]==prev){

           
            len++;
            continue;
           
           }
           
          if(len%2==0){
            len = 1;

          }else{
            total++;
            len = 0;
          }
           prev = s[i];
           
            
        }

        return total;
    }
};
