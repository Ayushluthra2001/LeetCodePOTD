class Solution {
public:
    vector<int> solve(string s){
        vector<int>ans;

        for(int k  = 0; k< s.length(); k++){
            if(s[k ] =='+' || s[k]=='-' || s[k] =='*'){
                vector<int>left = solve(s.substr(0,k));
                vector<int>right = solve(s.substr(k+1));
                for(auto i : left){
                    for(auto j : right){
                        if(s[k]=='*'){
                            ans.push_back(i * j);
                        }else if(s[k]=='+'){
                                ans.push_back(i+j);
                        }else{
                                ans.push_back(i-j);
                        }
                    }
                }
            }
        }

        if(ans.empty()) ans.push_back(stoi(s));
        return ans;
    }
    vector<int> diffWaysToCompute(string e) {
       

             return solve(e);
        
    }
};
