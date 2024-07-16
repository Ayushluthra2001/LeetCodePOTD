class Solution {
public:

bool checkPalindrome(string temp){
    if(temp.length() == 0) return false;

    int start = 0, end = temp.length()-1;
    while(start<=end){
        if(temp[start] != temp[end]) return false;


        start++ , end--;
    }

    return true;
}
    string longestPalindrome(string s) {
        int start = 0, end = s.length()-1;

        unordered_map<string,int>mapping;
        string ans = "";
        int  maxi = 0;
        while(start <= end){
            
            for(int j=end;j>=start;j--){
                string  temp = s.substr(start,j+1);
               bool check=false;
                if(mapping.find(temp)==mapping.end())
                 check = checkPalindrome(temp);
                else mapping[temp]=check;
                //cout<<temp<<endl;
                if(check && temp.length()>maxi){
                    maxi = temp.length();
                    ans  = temp;
                }
            }
            for(int j=start;j<=end;j++){
                string  temp = s.substr(j,start);
                 bool check=false;
                if(mapping.find(temp)==mapping.end())
                 check = checkPalindrome(temp);
                else mapping[temp]=check;
                //cout<<temp<<endl;
                if(check && temp.length()>maxi){
                    maxi = temp.length();
                    ans  = temp;
                }
            }
            start++;

    
        }

        return ans;
    }
};
// "civilwartestingwhetherthatnaptionoranynartionsoconceivedandsodedicatedcanlongendureWeareqmetonagreatbattlefiemldoftzhatwarWehavecometodedicpateaportionofthatfieldasafinalrestingplaceforthosewhoheregavetheirlivesthatthatnationmightliveItisaltogetherfangandproperthatweshoulddothisButinalargersensewecannotdedicatewecannotconsecratewecannothallowthisgroundThebravelmenlivinganddeadwhostruggledherehaveconsecrateditfaraboveourpoorponwertoaddordetractTgheworldadswfilllittlenotlenorlongrememberwhatwesayherebutitcanneverforgetwhattheydidhereItisforusthelivingrathertobededicatedheretotheulnfinishedworkwhichtheywhofoughtherehavethusfarsonoblyadvancedItisratherforustobeherededicatedtothegreattdafskremainingbeforeusthatfromthesehonoreddeadwetakeincreaseddevotiontothatcauseforwhichtheygavethelastpfullmeasureofdevotionthatweherehighlyresolvethatthesedeadshallnothavediedinvainthatthisnationunsderGodshallhaveanewbirthoffreedomandthatgovernmentofthepeoplebythepeopleforthepeopleshallnotperishfromtheearth"
