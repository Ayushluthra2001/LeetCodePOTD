class Solution {
public:
    void fillSieve(vector<bool>& sieve){
        sieve[0] = true;
         
        for(int i = 2;i<=1000;i++){
            if(sieve[i]==false){
                
                for(int j = i*2; j<1000; j+=i){
                   

                    sieve[j] = true;

                }
               // cout<<endl;
            }
        }
    }
    bool primeSubOperation(vector<int>& nums) {
        
        // fill the sieve 
        vector<bool>sieve(1001, 0);
    
        fillSieve(sieve);
        // cout<<"Prime Numbers"<<endl;
        // for(int i = 1; i<1e5; i++){
        //   if(sieve[i]==false) cout<<i<<" ";
         

        // }
        // cout<<endl;

       for(int i = nums.size()-2; i>=0; i--){
            if(nums[i]  < nums[i+1]){
                continue;
            }else{

                for(int p = 2;p<nums[i]; p++){
                    if(sieve[p]){
                        continue;
                    }
                    
                    if(nums[i] -p  < nums[i+1] ){
                            nums[i] -=p;
                            break;
                    }
                    
                }
                if(nums[i] >= nums[i+1]) return false;

            }
       }


        


        return true;

    }
};
