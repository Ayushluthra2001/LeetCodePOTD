class Solution {
public:

    int getHash(char &c) {
        return 1<<(c-'a');
    }
    long long wonderfulSubstrings(string word) {

        unordered_map<int,int> count={{0,1}};
		int running=0;
        long long result=0;
        for(char &w:word) {
			
            running^=getHash(w);
			
			
            for(char c='a';c<='j';c++)
                result+=count[running^getHash(c)];
				
			
            result+=count[running];
			
			
            count[running]++;
        }
        return result;
    }
};
