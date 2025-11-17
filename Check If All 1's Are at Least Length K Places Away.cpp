class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int i = 0;
        int count = 0;
        while( i < nums.size() && nums[i] == 0) i++;
        if(i==nums.size()) return true;
        else {
            i+=1;
            while(i<nums.size()){
                int j = i;
                while(j<nums.size() && nums[j] == 0) count++,j++;
                if(count < k && j!=nums.size()){
                   // cout<<count<<" "<<i<< " "<<j<<endl;
                    return false;
                }
                i = j+1;
                count = 0;

            }
        }

        return true;
    }
};
