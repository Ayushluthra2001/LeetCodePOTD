
// with unordered_map
class Solution {
public:
    int passwordStrength(string p) {

        unordered_map<char,int>mapping;
        for(auto i : p) mapping[i]++;
        int totalStrength = 0;
        bool isLower = false;
        bool isUpper = false;
        bool isDigit = false;
        bool isSpecial = false;
        string password = "";
    
        for(auto i : mapping) password+=i.first;
        cout<<password<<endl;
        for(int i =0; i<password.length(); i++){
            if(password[i]>='a' && password[i]<='z') totalStrength+=1;
            else if(password[i]>='A' && password[i]<='Z') totalStrength+=2;
            else if(password[i]>='0' && password[i]<='9') totalStrength+=3;
            else  {
                if(password[i] == '!' || password[i] == '@' || password[i] == '#' || password[i] == '$')
                    totalStrength+=5;
            }
        }
       
        return totalStrength;

    }
};
