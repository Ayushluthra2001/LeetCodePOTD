class Solution {
public:
    int maxScore(string s) {
        int maxi = 0;
        for(int i = 1; i < s.length(); i++){
            int leftZero = 0, rightOne = 0;
            for(int j = i-1; j>=0 ; j--){
                if(s[j] == '0') leftZero++;
            }
            for(int j = i; j<s.length(); j++){
                if(s[j] == '1') rightOne++;
            }
            //cout<<leftZero<<" "<<rightOne<<endl;
            maxi = max(leftZero + rightOne, maxi);
        }


        
        return maxi;
    }
};
