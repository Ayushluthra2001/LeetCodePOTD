class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        
        int boats=0;
        int sum=0;
        int i=0,j=people.size()-1;
        while(i<=j){
             sum=people[i]+people[j];
             
            if(i==j){
                boats++;
                i++;
                j--;
            }
            else if(sum >limit){
                boats++;
                sum=0;
                j--;
            }
            else if(sum<=limit){
                boats++;
                sum=0;
                i++;
                j--;
            }
        }
        if(boats==0) return 1;

        return boats;        
    }
};
// [3,2,2,1]
// 1 2 2 3 
