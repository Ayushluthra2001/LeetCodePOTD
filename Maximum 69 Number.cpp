class Solution {
public:
    int maximum69Number (int num) {
        string nums=to_string(num);
        bool flag=false;
        for(int i=0;i<nums.size();i++){
            if(nums[i]=='6' && !flag) {
                nums[i]='9';flag=true;
                break;
            }
        }
        if(flag){
            num=stoi(nums);
            return num;
        }
        return num;
    }
};
