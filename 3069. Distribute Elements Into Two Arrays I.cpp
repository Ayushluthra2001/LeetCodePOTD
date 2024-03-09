class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>temp1;
        vector<int>temp2;
        temp1.push_back(nums[0]);
        temp2.push_back(nums[1]);
        for(int i=2;i<nums.size();i++){
            if(temp1[temp1.size()-1]>temp2[temp2.size()-1]) temp1.push_back(nums[i]);
            else temp2.push_back(nums[i]);
        }
        // for(auto i : temp1){
        //     cout<<i<<" ";
        // }
        // cout<<endl;
        // for(auto i : temp2){
        //     cout<<i<<" ";
        // }
        // cout<<endl;
        int i=0,j=0;
        int k=0;
        while(i<temp1.size() || j<temp2.size()){
            if(i<temp1.size()){
                nums[k++]=temp1[i++];
            }else if(j<temp2.size()){
                nums[k++]=temp2[j++];
            }
        }
        return nums;
    }
};
