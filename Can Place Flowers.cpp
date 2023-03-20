class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        int i=0;
        if(n==0) return true;
        if(n==1 && flowerbed.size()==1) return flowerbed[0]==1 ? 0 :1;
        if(n==1 && flowerbed.size()==2){
            if(flowerbed[0]==1 || flowerbed[1]==1) return false;
            return true;
        }
        while(n>0 && i<flowerbed.size()){
            if(i==0 && flowerbed[i]==0){
                if(i+1<flowerbed.size()){
                    if(flowerbed[i+1]==0){
                        flowerbed[i]=1;
                        
                       
                        n--;
                    }
                    
                }else return false;
            }
            if(i-1>=0 &&  i+1<flowerbed.size() && flowerbed[i]==0 && flowerbed[i-1]==0 && flowerbed[i+1]==0){
                flowerbed[i]=1;
                
               
                n--;
                
            }
            if(i+1==flowerbed.size()){
                if(flowerbed[i]==0 && flowerbed[i-1]==0){
                    n--;
                    flowerbed[i]=1;
                }
            }
            i++;
        }
        if(n==0) return true;
        return false;
    }
};

