class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
       
       long long maxi=*max_element(time.begin(),time.end());
        long long low=0,high=maxi*totalTrips;
        long long ans=0;
        while(low<=high){
            long long  mid=(low+high)/2;
            long long count=0;
            for(int i=0;i<time.size();i++){
                count+=mid/time[i];

            }
            if(count>=totalTrips){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
            
                    
         }
        
        return ans;
    }
};





