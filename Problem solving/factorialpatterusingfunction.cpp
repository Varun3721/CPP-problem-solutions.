//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1
//this is called Pascal Triangle.

#include<bits/stdc++.h>
using namespace std;

int getFactorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
       fact=fact*i;
    }

    return fact;
    
}


int main(){
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
        for(int j=0;j<=i;j++){
            cout<<getFactorial(i)/(getFactorial(i-j)*getFactorial(j))<<" ";
        }
        cout<<endl;
    }
}

//now for nCr=n!/(n-r)!*r!
//use this samefunction and just call it all the time make double bracket to denom part .