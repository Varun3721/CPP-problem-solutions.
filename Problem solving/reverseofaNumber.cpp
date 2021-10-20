#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;

    //get the number make a loop until num!=0
    //each time we divide the no we get a no.
    //print the aray
    int revnum=0;
    while(num>0){
        int remainder=num%10;

        revnum=revnum*10+remainder;
        num=num/10;

    }
    cout<<revnum;
}