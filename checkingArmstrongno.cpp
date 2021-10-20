#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<endl;

    //so we need each digit of number;
    //for that getting remainder by 10 and divide by 10
    //each remainder gets cube of it and add to sum
    //untill you got number>0.

    int sum=0;
    int num=n;
    while(num>0){
        int rema=num%10;
        sum=sum + pow(rema,3);
        num=num/10;

    }
    if(n==sum){
        cout<<"its a armstrong number";
    }
    else cout<<"Not a armstrong number";
    
}