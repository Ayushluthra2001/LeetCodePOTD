class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>mapping;
        for(auto i : nums){
            mapping[i]++;
        }
        int count=0;
        for(auto i : mapping){
            int two =-1;
            int three=-1;
            
            
            
              
                while(i.second!=0){
                    
                    if(i.second%3==0) {
                        count+=i.second/3;
                        i.second=0;
                    }else if(i.second>=2) {
                        i.second-=2;
                        count++;
                    }else return -1;
                }
            
            
        }
        return count;
    }
};

