#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[]={10,7,4,6,8,10,11};
    int size=*(&a+1)-a;  //for getting the size.
    int maximum=1;

    int d=a[1]-a[0];   //here we need to find the common difference.
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
        ans=max(count,ans);    //max function for getting max out of two no.
    }
     
     cout<<ans<<"  ";
    }


//output for a[]=>> so we know that continous difference of longest subarray will be
//for 7-10=-3,4-7=-3,6-4=2,8-6=2,10-8=2,and 11-10=1;

//so we can clearly see the longest chain of same difference is 3 for differnce=2;
//output will be=3;