class Solution {
public:
    int minimumPushes(string word) {
        vector<int>freq(26,0);
        for(auto i : word) freq[i-'a'] ++;
        int ans = 0;
        sort(freq.begin(),freq.end(),greater<int>());

        for(int i=0;i<26;i++){
            int x = freq[i];
            int press = i/8 + 1;

            ans += press *  x ;

        }


        return ans;
    }
};
