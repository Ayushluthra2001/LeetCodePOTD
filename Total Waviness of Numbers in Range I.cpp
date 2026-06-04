class Solution {
public:
    int findWaviness(string nums){
        if(nums.length()<=2) return 0;
        int count = 0;
        for(int i =1; i<=nums.length()-2; i++){
            if(nums[i-1] <nums[i] && nums[i] > nums[i+1]) {
               count++;
            }
            if(nums[i-1] > nums[i] && nums[i] < nums[i+1]) count++;  
        }
        return count;
    }
    int totalWaviness(int num1, int num2) {
        int result = 0;
        for(int i = num1; i<=num2; i++){
            string num =to_string(i);
            //cout<<num<<endl;
            result+= findWaviness(num);
        }
        return result;
    }
};
