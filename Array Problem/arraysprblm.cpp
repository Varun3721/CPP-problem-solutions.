//Max till i
// 1,2,4,3,6,5
//1,2,4,4,6,6  =>output
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[]={0,-9,1,3,-4,5};
    int n=*(&a+1)-a;
    for(int i=1;i<n;i++){
        if(a[i-1]>a[i]){
            int temp=a[i-1];
            a[i]=temp;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}