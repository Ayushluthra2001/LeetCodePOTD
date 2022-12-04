class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        vector<long>pre_sum;
        // vector<int>suf_sum(nums.size(),0);
        long sum=0;
        int mini=INT_MAX;
        int index=-1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            pre_sum.push_back(sum);
            
        }
//          sum=0;
//          for(int i=nums.size()-1;i>=0;i--){
//             sum+=nums[i];
//             suf_sum[i]=sum;
            
//         }
        
        int no=nums.size();
        for(int i=0;i<nums.size();i++){
            long sum1=pre_sum[i];
            long sum2=pre_sum[nums.size()-1]-sum1;
            long avg=(sum1/(i+1));
            long avg2;
            // cout<<no<<endl;
            if(no-i-1==0){
                avg2=0;
            }else{
                avg2=(sum2/(no-i-1));
                
                // cout<<sum2<<" "<<no-i-1<<endl;
            }
            long ans=abs(avg-avg2);
            // cout<<i<<endl;
            if(mini>ans){
                mini=ans;
                index=i;
            }else if(mini==ans){
                if(index>i) index=i;
            }
        
            // cout<<sum1<<" "<<sum2<<" "<<avg<<" "<<avg2<<" "<<mini<<" "<<index<<endl;
        }
        // for(auto i : pre_sum){
        //     cout<<i<<" ";
        // }
        // cout<<endl;
        // for(auto i : suf_sum){
        //     cout<<i<<" ";
        // }
        // cout<<endl;
        return index;
    }
};
