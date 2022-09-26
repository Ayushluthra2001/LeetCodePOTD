class Solution {
public:
    map<char,list<char>> mp;
    
    bool dfs_helper(char src,char des,map<char,bool> &visited)
    {
        if(src==des) // this mean if we are checkign a==a so return true
            return true;

        visited[src]=true;
        
        for(auto nbr: mp[src])
        {
            if(!visited[nbr])
            {
                if(dfs_helper(nbr,des,visited))
                    return true;
            }
        }
        
        return false;
    }
    
    bool dfs(char src,char des)
    {
        map<char,bool> visited;
        
        return dfs_helper(src,des,visited);
    }
    
    bool equationsPossible(vector<string>& equations) {
        
        // creating  adjecency list 
        for(auto s:equations)
        {
            if(s[1]=='=') // This means a==b and b==a like undirected graph we can go everywhere 
            {
                mp[s[0]].push_back(s[3]);
                mp[s[3]].push_back(s[0]);
            }
        }
        /*
        adjcency list of ["a==b","b==a","b==d" , "c==a" "d==a" "d!=b"]
        
        a->b,d,c 
        b->a,d
        d->b,a
        
      
        */
        for(auto s:equations)
        {
            if(s[1]=='!')
            {
                if(dfs(s[0],s[3])==true)
                    return false;
            }
        }
        
        return true;
    }
};
