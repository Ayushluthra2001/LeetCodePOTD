class Solution {
public:
    void solve(int num, unordered_map<int,int>&mapping){
        int i = 0;

        while(num > 0){
            if(num%2==1){
                mapping[i]++;
            }
            i++;
            num = num/2;
        }
        return ;
    }
    int largestCombination(vector<int>& candidates) {
        unordered_map<int,int>mapping;

        for(auto i : candidates){
            solve(i, mapping);
        }

        int maxi = 0;

        for(auto i : mapping){
            if(i.second > maxi) maxi = i.second;
        }
        return maxi;
    }
};
