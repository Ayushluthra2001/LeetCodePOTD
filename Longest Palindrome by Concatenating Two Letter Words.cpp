class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        map<string,int>mapping;
        int ans=0;
        for(int i=0;i<words.size();i++){
            mapping[words[i]]++;
            
        }
        bool flag=0;
        for(auto i : mapping){
            string s=i.first;
            string j=s;
            reverse(s.begin(),s.end());
            if(s==j){
                ans+=i.second/2;
                if(i.second%2){
                    flag=true;
                }
            }else{
                if(mapping.count(s)){
                    ans+=min(i.second,mapping[s]),mapping.erase(s);
                }
                
            }
        }
        ans=ans*4;
        if(flag){
            ans+=2;
        }
        return ans;
    }
};
