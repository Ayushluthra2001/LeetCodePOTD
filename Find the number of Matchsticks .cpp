class Solution{
	public:
	int find(int n,int a[])
	{
	    queue<int>q;
	    for(int i=0;i<n;i++){
	        q.push(a[i]);
	    }
	    while(q.size()>1){
	        int first=q.front();
	        q.pop();
	        int second=q.front();
	        q.pop();
	        q.push(abs(first-second));
	    }
	    return q.front();
	}
};
