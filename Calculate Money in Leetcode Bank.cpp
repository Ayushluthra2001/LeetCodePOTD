class Solution {
public:
    int totalMoney(int n) {
        
        if(n<=7){
           return (n*(n+1))/2;
        }
        int firstWeek = 28;
        int remDays = n%7;
        int noOfWeek = n/7;
        int sum = 0;
        cout<<remDays<<" "<<noOfWeek<<endl;
       
         sum = (noOfWeek * (2 * 28 + (noOfWeek - 1) * 7)) / 2;
        int start = (noOfWeek+1);
        for(int i =1; i<=remDays;i++){
            sum+= start;
            start++;
        }
        return sum;
    }
};
