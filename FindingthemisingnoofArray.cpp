#include<bits/stdc++.h>
using namespace std;

void findmissingNumber(int * arr,int size){
    int n=size;
    int Truesum= (n*(n+1))/2;
    int sumofelements=0;
    for(int i=1;i<size;i++){
        sumofelements=sumofelements+arr[i];
    }
    cout<<"the output is:"<<Truesum-sumofelements;
    
    
}

int main(){
    int size;
    cout<<"enter the array size";
    cin>>size;
    int Array[size];
    cout<<"enter array elements";
    for(int i=1;i<size;i++){
        cin>>Array[i];
    }

    findmissingNumber(Array,size);
}