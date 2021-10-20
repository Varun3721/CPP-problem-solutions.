#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[]={3,1,2,9,78,67};

    int size=*(&a+1)-a;
    for(int i=0;i<size;i++){

        int j=i;
         int sum=0;
        while(j<size){
           
            sum=sum+a[j];
            cout<<sum<<" ";
            j++;
        }

    }
    
        
    
}