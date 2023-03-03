class Solution {
public:
    int strStr(string haystack, string needle) {
        int j=0;
        int i=0;
        while(i<haystack.length()){
            int j=0;
            int k=i;
            while(j<needle.length() && k<haystack.length() && haystack[k]==needle[j]) k++,j++;
            
            if(j==needle.length()) return k-needle.length();
            // cout<<i<<endl;
            i++;

        }
        return -1;
    }
};
