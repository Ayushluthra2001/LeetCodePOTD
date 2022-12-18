class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>ans;
        stack<pair<int,int>>s;
        ans.push_back(0);
        
        s.push({temperatures[temperatures.size()-1],temperatures.size()-1});
        for(int i=temperatures.size()-2;i>=0;i--){
            int count=1;
                while(!s.empty() && s.top().first<=temperatures[i])s.pop(),count++;
                if(s.empty()){
                    // cout<<i<<endl;
                s.push({temperatures[i],i});
                ans.push_back(0);
                }else{
                    // cout<<"curr i "<<i<<" "<<s.top().second<<endl;
                     ans.push_back(s.top().second-i);
        
                     s.push({temperatures[i],i});

                }
                
            }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
// [73,74,75,71,69,72,76,73]
 


