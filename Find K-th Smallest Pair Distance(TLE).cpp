class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
         priority_queue<int>pq;
         for(int i=0; i<nums.size(); i++){
            for(int j=i+1;j<nums.size();j++){
                
                if(pq.size()<k){
                        pq.push(abs(nums[i]-nums[j]));
                }else{
                        pq.push(abs(nums[i]-nums[j]));
                        pq.pop();
                }   
            }
         }

         return pq.top();
    }
};
