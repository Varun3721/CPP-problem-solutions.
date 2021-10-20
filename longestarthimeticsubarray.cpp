#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[]={10,7,4,6,8,10,11};
    int size=*(&a+1)-a;
    int maximum=1;

    int d=a[1]-a[0];
    int count=1;
    int ans=1;
    int j=2;
    while(j<size){
        if(a[j+1]-a[j]==d){
            count=count+1;
            j++;
        }
        else{
            d=a[j+1]-a[j];
            count=1;

        }
        ans=max(count,ans);
    }
     
     cout<<ans<<"  ";
    }