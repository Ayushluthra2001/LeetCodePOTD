class Solution {
public:
    bool sameBit(int x, int y ){
        int count1= 0, count2 = 0;

        while(x > 0){
            if(x%2!=0) count1++;
            x = x/2;

        }
        while(y > 0){
            if(y%2!=0) count2++;
            y = y/2;
            
        }

        return count1 == count2;

    }
    bool canSortArray(vector<int>& nums) {
        
        bool sorted = false;

        while(!sorted){
            bool pass = false;
            for(int i = 1;i<nums.size();i++){

                if(nums[i] < nums[i-1]){
                    
                    if(sameBit(nums[i] , nums[i-1])){
                        swap(nums[i] , nums[i-1]);
                        pass = true;
                    }
                }

            }
            if(!pass) break;

        }
        for(int i = 1; i<nums.size(); i++){
            if(nums[i] < nums[i-1]) return false;
        }

        return true;
    }
};
