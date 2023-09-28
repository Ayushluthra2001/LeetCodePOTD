class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>even;
        vector<int>odd;
        for(auto i : nums){
            if(i%2==0){
                even.push_back(i);
            }else{
                odd.push_back(i);
            }
        }
        nums.clear();
        for(int i=0;i<even.size();i++){
            nums.push_back(even[i]);
        }
        for(int j=0;j<odd.size();j++){
            nums.push_back(odd[j]);
        }
        return nums;

    }
};
