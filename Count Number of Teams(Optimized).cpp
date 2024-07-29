class Solution {
public:
    int numTeams(vector<int>& rating) {
        int count =0;
        int i = 0;
        

       for(int i=0;i<rating.size();i++){
            int left =0;
            int right =0;
            
            // strictally increasing 
            for(int j=0;j<i;j++){
                if(rating[i]>rating[j]) left++;
            }
            for(int j=i+1;j<rating.size();j++){
                if(rating[i]<rating[j]) right++;

            }
            count += left* right;
            
                left =0;
                right =0;
            // strictly decreasing 
            for(int j=0;j<i;j++){
                if(rating[j]>rating[i])  left++;

            }
            for(int j=i+1;j<rating.size();j++){
                if(rating[j]<rating[i]) right++;
            }
            count+=left*right;
       }
    return count;
    }
    
};
