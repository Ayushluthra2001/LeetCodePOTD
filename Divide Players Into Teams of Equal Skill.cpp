class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        long long maxi=0;
        int start=0;
        int end=skill.size()-1;
        long sum=skill[start]+skill[end];
        while(start<=end){
            long currsum=skill[start]+skill[end];
            if(sum!=currsum) return -1;
            maxi=maxi+(skill[start]*skill[end]);
            start++;
            end--;
        }
        return maxi;
    }
};
