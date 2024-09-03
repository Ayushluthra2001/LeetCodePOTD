class Solution {
public:
    int getLucky(string s, int k) {
        string ss= "";
        for(int i = 0; i<s.length(); i++){
            
            ss += to_string((s[i] - 'a' )  + 1);
        }

        while( k--){

            int sum = 0;
            int i = 0;
            while(i < ss.length()){
                sum += ss[i]-'0';
                i++;
            }

            ss = to_string(sum);

        }
        
        return stoi(ss);
    }  
};

