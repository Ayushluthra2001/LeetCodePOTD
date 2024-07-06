class Solution {
public:
    int passThePillow(int n, int time) {
        int index = 1; 

        bool flag = true;

        while(time--){
            if(index>=n) flag = !flag;
            
            if(flag){
                index++;
            }else{
                index--;

            }
            if(index<=1) flag = !flag;
        }
        return index;
    }
};
