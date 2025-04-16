class Solution {
public:
    long long countGood(vector<int>& nums, int k) {


int n=nums.size();
        int r=0;
        int l=0;
long long ans=0;
map<int,int>mp;
long long pairs=0;
          
        while(r<n)
        {


                pairs+=mp[nums[r]];
          
            mp[nums[r]]++;
            while(pairs>=k && l<n)
            {
                ans +=n-r;

                       
                        pairs-=mp[nums[l]]-1;


                        mp[nums[l]]--;

                        l++;

                    


            }

            r++;

        }

        return ans;
        
    }
};
