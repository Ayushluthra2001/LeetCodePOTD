class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int ans=*max_element(piles.begin(),piles.end());
        long long int start=1,end=ans;
        while(start<=end){
            long long int mid=(start+end)/2;
            long long int  count=0;
            for(int i=0;i<piles.size();i++){

                if(piles[i]<=mid){
                    count++;
                }else{
                    if(piles[i]%mid==0){
                        count+=piles[i]/mid;
                    }else{
                        count+=piles[i]/mid;
                        count++;
                    }
                    
                }
            }
            if(count<=h){
                ans=mid;
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return ans;        
    }
};

