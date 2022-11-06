class Solution {
public:
        string orderlyQueue(string s, int k) {
        if (k == 1) {
     
            s.reserve(size(s) * 2);
            string_view ans{s};
            
            s += s;
            string_view sv{s};
            for (int i = 1; i < size(ans); ++i)
                ans = min(ans, sv.substr(i, size(ans)));

            return string{ans};
        }
        
        
        sort(s.begin(),s.end());
        return s;
    }
};
