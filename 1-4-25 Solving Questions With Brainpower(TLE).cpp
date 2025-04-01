class Solution {
public:
    long long solve(vector<vector<int>>& questions , int index){
        if(index >= questions.size()) return 0;
        int include = 0 , notInclude = 0;
        include = questions[index][0] + solve(questions, index+questions[index][1]+1);
        notInclude = solve(questions , index+1);

        return max(include, notInclude);
    }
    long long mostPoints(vector<vector<int>>& questions) {

        
        return solve(questions,0);   
    }
};
