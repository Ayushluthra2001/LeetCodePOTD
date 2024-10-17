class Solution {
public:
    void helper(vector<int>& data , int num){
        while(num > 0){
            data.push_back(num%10);
            num = num / 10;
        }
        return ;
    }
    int maximumSwap(int num) {
        vector<int>data;

        int maxi = num;

        helper(data,num);    
        reverse(data.begin(),data.end());

        int i = 0;
        int j = data.size()-1;
       
        
        for(int i = 0;i<data.size();i++){
            for(int j = i+1;j<data.size();j++){
                if(data[j] > data[i]){
                    swap(data[i] , data[j]);
                    int newNo = 0;
                    for(int i = 0;i<data.size();i++){
                    newNo = newNo * 10  + data[i];
                    }
                    maxi = max(maxi , newNo);
                    swap(data[i] , data[j]);
                    
                }
            }
        }
        

        
        return max(num , maxi);
    }
};
