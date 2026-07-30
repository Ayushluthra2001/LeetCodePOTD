class Solution {
public:
    int minimumPushes(string word) {
        if(word.length()<=8) return word.length();
        int len = word.length();
        int count =0;
        int pressed = 1;
        while(len >=8){
            if(pressed ==1){
                count += 8;
            }else{
                count+= pressed * 8;

            }
            pressed++;
            len-=8;
        }
        count+= pressed * len;
        return count;
    }
};
