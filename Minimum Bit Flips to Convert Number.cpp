class Solution {
public:
    int minBitFlips(int start, int goal) {
        vector<int>first(32,0);
        vector<int>second(32,0);
        int i = 31;
        while(start > 0){
            first[i--] = start %2;
            start/=2;

        }
        i = 31;
        while( goal > 0){
            second[i--] = goal %2;
            goal/=2;
        }

        int count = 0;
        for(int a = 0;a < 32;a++) if(first[a] != second[a]) count++;
        return count;
    }
};
