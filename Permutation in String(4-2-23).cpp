class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        sort(s1.begin(),s1.end());
        vector<int>freq1(26,0);
        for(int i=0;i<s1.length();i++){
            freq1[s1[i]-'a']++;
        }
        for(int i=0;i<s2.length();i++){
            int j=i;
            int start=0;
            int end=s1.length();
            vector<int>freq2(26,0);
            while(j<s2.length() && start<end){
                freq2[s2[j]-'a']++;
                start++,j++;
            } 
            
            if(freq1==freq2) return true;

        }
        return false;
    }
};
