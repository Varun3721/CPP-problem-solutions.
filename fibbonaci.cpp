#include<bits/stdc++.h>
using namespace std;


void fibonaciSeries(int num){
    int fibbo[num];
    fibbo[1]=0;
    fibbo[2]=1;
    for(int i=3;i<=num;i++){
        fibbo[i]=fibbo[i-1]+fibbo[i-2];
    }
    for(int i=1;i<=num;i++){
        cout<<fibbo[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    fibonaciSeries(n);
}

//o(n+n)=O(n) only
//we could also do here in one for loop that is taking t1and t2 term
//and nextterm=t1+t2;
//t1=0,t2=1;
//print t1everytimeofloopstart
//then nextterm=t1+t2;
//t1=t2;
//t2=nextter;
// 0 1 1 2 3... like that 
//this will also takes 0(n)simply