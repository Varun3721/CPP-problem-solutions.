
#include<bits/stdc++.h>
using namespace std;

int checkifPrime(int n){
    int m=n/2;
    for(int i=2;i<=m;i++){
        if(n%i==0){
            return 0;
        }
        
        
        
    }
    return 1;
}







int main(){
    int a,b;
    cin>>a;
    cin>>b;
    for(int i=a;i<=b;i++){
        if(checkifPrime(i)){
            cout<<i<<endl;
        }
    }
}