class Solution {
public:
   
    
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        vector<int>ans;
        vector<int>prifix;
        sort(nums.begin(),nums.end());
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            prifix.push_back(sum);
        }
        
        for(int i=0;i<queries.size();i++){
            
           bool gotit=false;
            for(int j=0;j<prifix.size();j++){
                if(prifix[j]>queries[i]){
                    ans.push_back(j);
                    gotit=true;
                    break;
                }
            }
            if(gotit==false) ans.push_back(nums.size());
        }
        return ans;
    }
};
