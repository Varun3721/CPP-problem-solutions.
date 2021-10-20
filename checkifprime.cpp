#include<bits/stdc++.h>
using namespace std;
void checkifprime(int n){
    int m=n/2;
    int i=2;
    while(i<m){
        if(n%i!=0){
            i++;
            if(i==m){
                cout<<"its a prime";
                break;
            }
        }
        else{
            cout<<"not prime";
            break;
        }
    }
   
    
    }
    

int main(){
    cout<<"enter the number to be checked as prime or not ";
    int num;
    cin>>num;
    checkifprime(num);
}