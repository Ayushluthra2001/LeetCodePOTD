
class Solution {
public:
    bool isPossible(int x , vector<int>& quantities , int n){
        
        for(int i = 0; i <quantities.size(); i++){
            n-= (quantities[i] + x -1 ) / x;

            if(n < 0) return false;
        }

        return true;

    }
    int minimizedMaximum(int n, vector<int>& quantities) {
      


        int  low = 1;
        int high = *max_element(quantities.begin(),quantities.end());

        int result = 0;


        while(low <= high){
            int mid = low + (high - low)/2;

            if(isPossible(mid , quantities, n)){
                result = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return result;
    }
};  
