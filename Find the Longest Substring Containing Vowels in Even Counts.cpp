class Solution {
public:
    int findTheLongestSubstring(string s) {
        unordered_map<string, int>mapping;
        string currstate = "00000";
        vector<int>state(5,0);
        int ans = 0;
        mapping[currstate] = -1;
        for(int i = 0;i<s.length(); i++){
                if(s[i]=='a') state[0]=(state[0] + 1)%2;
                else if(s[i] =='e') state[1]=(state[1]+1)%2;
                else if(s[i]=='i') state[2]=(state[2]+1)%2;
                else if(s[i] =='o') state[3]=(state[3] +1)%2;
                else if(s[i]=='u') state[4] =(state[4] + 1) %2;

            currstate ="";
            for(int j = 0; j<5; j++){
                currstate+=to_string(state[j]);
            }

            if(mapping.find(currstate) != mapping.end()){
                ans = max(ans, i-mapping[currstate]);
            }else{
                mapping[currstate] = i;
            }
        }

        return ans; 
    }
};
