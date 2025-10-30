class Solution {
public:
    int minNumberOperations(vector<int>& target) {
        int  n = target.size();

        long long result = 0;
        vector<int>diff(n,0);
        for(int i = 0; i<target.size(); i++){
            diff[i] = target[i]-0;
        }
        int curr  = 0;
        int prev  = 0;

        for(int i = 0; i<n;i++){
            curr = diff[i];

            if((curr > 0 && prev<0) || (curr<0 && prev>0)){
                result += abs(curr);
            }else if(abs(curr) > abs(prev)){
                result+= abs(curr - prev);
            }

            prev = curr;
        }

        return result;

    }
};
