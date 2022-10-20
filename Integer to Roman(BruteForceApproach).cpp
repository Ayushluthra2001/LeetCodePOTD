class Solution {
public:
    string intToRoman(int num) {
        vector<string>roman={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        vector<int>value={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string ans="";
        for(int index=0;num>0;index++){
            while(num>=value[index]){
                ans+=roman[index];
                num-=value[index];
            }
        }
        return ans;
    }
};
