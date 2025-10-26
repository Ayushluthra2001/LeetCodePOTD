class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int count = 0;
        int upperLevel = 0;

        for(int i =0; i<bank.size();i++){
            int curr = 0;
            string temp = bank[i];
            for(int j  =0 ;j<temp.length();j++) if(temp[j]=='1') curr++;

            count+= upperLevel *curr;
            if(curr!=0)upperLevel = curr;
        }
        return count;
    }
};
