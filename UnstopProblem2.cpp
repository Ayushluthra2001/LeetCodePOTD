#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<bool>prime(1e8+1,0);
    
    int x,y;
    cin>>x>>y;
    for(int i=2;i<=sqrt(1e8);i++){
        if(prime[i]==false){
            
            for(int j=i*i;j<=1e8;j+=i){
                prime[j]=true;
            }

        }
       
    }
    if(prime[x]==true || prime[y]==true) {
        cout<<"Sorry Ms. Agojil.";
    }
    if(x<=y){

    
         for(int i=x;i<=y;i++){
              if(prime[i]==false){
                    cout<<i<<" ";
             }

        }
        cout<<endl;
    }else{
        for(int i=x;i>=y;i--){
            if(prime[i]==false){
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
