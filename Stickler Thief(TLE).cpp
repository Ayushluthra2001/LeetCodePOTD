//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int solve(int arr[],int n,int index){
        if(index>=n) return 0;
        if(index==n-1) return arr[index];
        int take=arr[index]+solve(arr,n,index+2);
        int nottake=solve(arr,n,index+1);
        return max(take,nottake);
    }
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
        return solve(arr,n,0);
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}

// } Driver Code Ends
