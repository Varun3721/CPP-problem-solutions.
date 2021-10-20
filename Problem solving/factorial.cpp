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
    int answer=getFactorial(num);
    cout<<answer;
}

//now for nCr=n!/(n-r)!*r!
//use this samefunction and just call it all the time make double bracket to denom part .