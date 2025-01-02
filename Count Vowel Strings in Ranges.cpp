class Solution {
public:
    bool vowel(char ch){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='u' || ch=='o') return true;
        return false;
    }
    bool check(char temp , char temp2){
        if(vowel(temp) && vowel(temp2)) return true;
        return false;
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int>ans;
        
        vector<int>count(words.size(),0);
        int c = 0;
        for(int i = 0; i<words.size();  i++){
            if(check(words[i][0], words[i][words[i].length()-1])){
                c++;
               
            }
            count[i] = c;
        }

        
        for(int i = 0; i<queries.size(); i++){
            int start = queries[i][0];

            int end = queries[i][1];
            if(start==0){
                ans.push_back(count[end]);
            }
            else  ans.push_back(count[end]-count[start-1]);
        }
        return ans;
    }
};
