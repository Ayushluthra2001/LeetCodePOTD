class Solution {
public:
    long long minimumSteps(string s) {
        long long ans = 0;
        long long count = 0;

        for(int i = 0; i<s.length(); i++){
            if(s[i]=='1')count++;
            if(s[i]=='0')ans+=count;
        }

        return ans;
    }
};
