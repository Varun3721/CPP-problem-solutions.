//concept:- to insert the element from unsorted array to the correct position in the sorted array.
//Time complexity=O(n^2);
#include<bits/stdc++.h>
using namespace std;    

void sortbyInsertion(int arr[],int size){
    for(int i=1;i<size;i++){
        int current =arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;

    }
   
     for(int i=0;i<size;i++){

            cout<<arr[i]<<" ";
        }
}

int main(){
    int arr[]={17,9,1,4,11,7};
    int n=*(&arr+1)-arr;
    sortbyInsertion(arr,n);
    return 0;
}