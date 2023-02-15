class Solution {
public:
    vector<int> addToArrayForm(vector<int>& nums, int k) {
        string temp1="";
        string temp2="";
        string res="";
        for(int i=0;i<nums.size();i++){
            temp1+=to_string(nums[i]);
        }
        int temp3=k;
        while(temp3>0){
            temp2+=to_string(temp3%10);
            temp3=temp3/10;
        }
       
        reverse(temp2.begin(),temp2.end());
        //  cout<<temp1<<" "<<temp2<<endl;
        int carry=0;
        int i=temp1.length()-1,j=temp2.length()-1;

        while(carry>0 || i>=0 || j>=0){
            int first=i>=0 ? temp1[i]-'0' :0;
            int second = j>=0 ? temp2[j]-'0' : 0;
            int sum=first+second+carry;
            if(sum>9){
                res+=to_string(sum%10);
                carry=sum/10;
            }else{
                res+=to_string(sum);
                carry=0;
            }
            i--;
            j--;
        }
        reverse(res.begin(),res.end());
        vector<int>ans;
        for(int i=0;i<res.length();i++){
            ans.push_back(res[i]-'0');
        }
        return ans;
    }
};
