

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[]={1,2,0,7,19,4};
    int n=*(&a+1)-a;   //for getting size of array.
    //2
    int maximum=-1;
    int recorddays=0;
    for(int i=0;i<n;i++){
        if(a[i]>maximum && a[i]>a[i+1]){
            recorddays++;
            maximum=a[i];
            
        }
        else continue;

     
            
       
 
        
    }

    cout<<recorddays;




}