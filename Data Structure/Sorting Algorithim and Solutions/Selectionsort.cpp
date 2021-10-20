//finding the minimum element from the unsorted array elements and putting it at the first element
//Note :-something about first element(to the unsorted list only).


#include<bits/stdc++.h>
using namespace std;

void getSelectedsorted(int arr[],int n){
    for(int i=0;i<n-1;i++){                     //-----n-1
        for(int j=i+1;j<n;j++){                 //---n(n-1)
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }

        }
        }
        for(int i=0;i<n;i++){              //---n
            cout<<arr[i]<<" ";
        }
    }
                                    //so time complexity would be O(n^2)

int main(){
    int arr[]={9,5,7,2,11};
    int arrlength=*(&arr+1)-arr;
    cout<<"array size is "<< arrlength<<endl;
    getSelectedsorted(arr,arrlength);

  
    // cout<<*(&arr+1)-arr;cout<<endl;
    // cout<<*(&arr+1);cout<<endl;
    // cout<<arr;cout<<endl;
    // cout<<&arr;
   
}