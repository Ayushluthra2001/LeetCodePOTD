class Solution {
public:
int Find(int currIndex, vector<int>&A, vector<int>&B){
    vector<int>temp;
    
    int count =0;
    for(int i = 0; i<B.size() && i <= currIndex; i++){
        temp.push_back(B[i]);
    }
    for(int i = 0; i<A.size() && i<=currIndex; i++){
        if(find(temp.begin(), temp.end(), A[i]) != temp.end()) count++; 
    }

    return count;
}
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {

        
        vector<int>currCount;
        
        for(int i = 0; i<A.size(); i++){
            int aCount = Find(i,A,B);
           
             currCount.push_back(aCount);

        }
        return currCount;        
    }
};
