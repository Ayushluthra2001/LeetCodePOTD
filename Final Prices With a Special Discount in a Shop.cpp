class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
      
        for(int i =0; i<prices.size();i++){
            int mini = prices[i];
            int minIndex = i;
            
            for(int j =i+1;j<prices.size();j++){
              if(mini >=prices[j]){
                mini = prices[j];
                minIndex = j;
                break;
                
              }
               
            }
            
            if(minIndex == i){
                continue;
            }else{
               
                 prices[i] = prices[i]-mini;
            }
        }
       return prices;
    }
};
