class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int count=0;
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                for(int k=j;k<arr.size();k++){
                    int a=0;
                    int b=0;
                    for(int c=i;c<j;c++){
                        a=a^arr[c];
                    }
                    for(int d=j;d<=k;d++){
                        b=b^arr[d];
                    }
                    if(a==b) count++;
                }
            }
        }
        return count;
    }
};
