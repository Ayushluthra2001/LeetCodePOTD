class Solution {
public:
    void add(int number , vector<int>& bits){
        for(int i = 0;i<bits.size(); i++){
            if((number >> i)  & 1){
                bits[i]+=1;
            }
        }
    }
    void remove(int number , vector<int>&bits){
        for(int i = 0;i<bits.size();i++){
            if((number >> i) & 1){
                bits[i]-=1;
            }
        }
    }
    int getNumber(vector<int>&bits){
        int num = 0;
        for(int i = 0;i<bits.size();i++){
            if(bits[i]>=1){
                num |= (1 <<i );
            }
        }
        return num;
    }
    int minimumSubarrayLength(vector<int>& nums, int k) {
        
        int result = INT_MAX;
        int i = 0 , j = 0;
        vector<int>bits(32,0);


        while(j < nums.size()){
            add(nums[j] , bits);
            while( i <=j && getNumber(bits) >= k){
                result = min(result , j-i+1);
                remove(nums[i] ,bits);
                i++;
            }
            j++;
        }

        return result ==INT_MAX ? -1 : result;


    }
};
