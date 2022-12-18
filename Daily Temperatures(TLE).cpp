class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>ans;
        for(int i=0;i<temperatures.size();i++){
            int count=1;
            bool find=false;
            for(int j=i+1;j<temperatures.size();j++){
                if(temperatures[i]<temperatures[j]) {
                    find=true;
                    break;
                }else{
                    count++;
                }
            }
            if(find){
                ans.push_back(count);
            }else{
                ans.push_back(0);
            }
        }
        return ans;
    }
};
