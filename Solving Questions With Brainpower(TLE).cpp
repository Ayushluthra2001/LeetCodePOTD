class Solution {
public:
    long long solve(vector<vector<int>>&questions,int curr){
        if(curr>=questions.size()) return 0;
        long long skip=solve(questions,curr+1);
        long long notskip=questions[curr][0]+solve(questions,curr+questions[curr][1]+1);
       
        return max(skip,notskip);
    }
    long long mostPoints(vector<vector<int>>& questions) {
        return solve(questions,0);
    }
};
