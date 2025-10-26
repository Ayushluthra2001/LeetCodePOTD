class Bank {
public:
 unordered_map<int ,long long>mapping;
    Bank(vector<long long>& balance) {
      
       for(int i = 1; i<=balance.size(); i++){
        mapping[i] = balance[i-1];
       }
        
        
    }
    
    bool transfer(int account1, int account2, long long money) {
        if(mapping.find(account1)== mapping.end()) return false;
        if(mapping.find(account2)== mapping.end()) return false;
        if(mapping[account1]>=money){
            mapping[account1]-=money;
            mapping[account2]+=money;
            return true;
        }
        return false;
    }
    
    bool deposit(int account, long long money) {
        
        if(mapping.find(account)== mapping.end()) return false;
        mapping[account] += money;
        return true;

    }
    
    bool withdraw(int account, long long money) {
        if(mapping.find(account)== mapping.end()) return false;
        if(mapping[account]>= money) {
            mapping[account]-=money;
            return true;
        }
        return false;
    }
};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */
