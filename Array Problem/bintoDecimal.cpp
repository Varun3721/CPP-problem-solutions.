#include<bits/stdc++.h>
using namespace std;


// if num=55 ,  55%2=1 and convert the num=>>55/2=27 
//27%2=1 and 27/2 =13
// 13%2=1 and 13/2=6
//6%2 =0 and 6/2=3
// 3%2=1 and 3/2=1

// 1%2(here so we need a condition that makes 1/2=0(not possible))so stop.


int main(){
    int num;
    cin>>num;
    int binary[64];
    int remainder;
    int i=0;
    while(num!=0){
        if(num==1){
            binary[i]=1;
            num=num/2;
            i++;
        }
        else {
             binary[i]=num%2;
             num=num/2;
             i++;

        }
       
        



    }
    
    int j=i-1;
    while(j>=0){
        cout<<binary[j];
        j--;
    }
}