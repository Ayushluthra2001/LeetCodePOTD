class Solution {
public:
    bool  check(int n){
        vector<int>temp;
        if(n==0) return 1;
        while(n>0){
            temp.push_back(n%2);
            n=n/2;
        }
        // if(n==6){
        //     for(auto i : temp){
        //         cout<<i<<" ";
        //     }
        // }
      //  cout<<endl;
        if(temp[0]==0)return 1;
        return false;
    }
    bool hasTrailingZeros(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int x=nums[i];
            int y=nums[i];
            for(int j=i+1;j<nums.size();j++){
                
                x=x|nums[j];
                y=nums[i]|nums[j];
                cout<<x<<" "<<y<<endl;
                if(check(x) || check(y)){
                    return true;
                }
            }
        }
        return false;
    }
};
