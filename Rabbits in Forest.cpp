class Solution {
public:
    int numRabbits(vector<int>& answers) {
        int total = 0;
        unordered_map<int,int>mapping;
        for(auto i : answers) mapping[i]++;
        for( auto i : mapping){
            int a = i.first;
            int b = i.second;
            int group = (a + 1);
            int g = ceil((double)b / group);
            total += g * (group);
        }
        return total;

    }
};
