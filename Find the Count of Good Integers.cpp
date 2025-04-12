class Solution {
public:
    

    long long countGoodIntegers(int n, int k) {
        unordered_set<string>st;
        long long result=0;

        int d=(n+1)/2;
        int start=pow(10,d-1);
        int end=pow(10,d)-1;

vector<long long>factorial(11,1);
for(int i=1;i<11;i++)
{
   factorial[i]=factorial[i-1]*i;
}
     for(int num=start;num<=end;num++)
     {
        string lefthalf=to_string(num);
        // ultimately we have to find full string.
        string full="";
        // if pallindrome is made up of even size
        if(n%2 ==0)
        {
            string righthalf=lefthalf;
            reverse(righthalf.begin(),righthalf.end());
            full=lefthalf+righthalf;
        }
        else // if odd size then leave mid char and reverse other half
        {
           string righthalf=lefthalf.substr(0,d-1);
            reverse(righthalf.begin(),righthalf.end());
            full=lefthalf+righthalf;
        }
        long long number=stoll(full);
        if(number%k!=0)
        continue;
        sort(full.begin(),full.end());
        st.insert(full);
     }
      
       //store char frequency
       for(string s:st)
       {
            vector<int>count(10,0);
            for(char &ch:s)
            {
                count[ch-'0']++;  //mp[ch]++
            }
            int totaldigits=s.length();
            int zerodigits=count[0];
            int nonzerodigits=totaldigits-zerodigits;
            
            long long perm=nonzerodigits*factorial[totaldigits-1];
            //divide by frequency of each char
            for(int i=0;i<10;i++)
            {
                perm /=factorial[count[i]];
            }
            result +=perm;


       }

      return result;

    }
};
