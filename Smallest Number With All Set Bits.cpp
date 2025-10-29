class Solution {
public:
    int smallestNumber(int n) {
        if(n==1) return 1;
        if(n<=3) return 3;
        vector<int>bits;
        while(n>=1){
            bits.push_back(n%2);
            n/=2;

        }
        //bits.push_back(1);
        
        for(int i =0; i<bits.size();i++){
            if(bits[i]==0) bits[i]==1;
        }

        int newNumber = 0;
        int start = 0;

        for(int i =0;i<bits.size(); i++){
            int x = pow(2,start);
            newNumber +=x;
            start++;
        }

        return newNumber;
    }
};
