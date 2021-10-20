#include<bits/stdc++.h>
using namespace std;

void merger(int arr[],int l,int h ,int mid){
    int n1=mid-l+1;
    int n2=h-mid;
    int b[n1];
    int c[n2];
    for(int i=0;i<n1;i++){
        b[i]=arr[l+i];

    }
    for(int i=0;i<n2;i++){
        c[i]=arr[mid+1+i];
    }

    int i=0;
    int j=0;
    int k=l;
    while(i<n1 && j<n2){
        if(b[i]<c[i]){
            arr[k]=b[i];
            k++;
            i++;
        }
        else{
            arr[k]=c[j];
            k++;
            j++;
        }
    }
    while(i<n1){
        arr[k]=b[i];
        k++;i++;
    }

    while(j<n2){
        arr[k]=c[j];
        k++;j++;
    }


    
}

void mergeSorting(int arr[],int l,int h){
    if(l<h){
        int mid=(l+h)/2;
        
        mergeSorting(arr,l,mid);
        mergeSorting(arr,mid+1,h);

        merger(arr,l,h,mid);
    }

    
    

    


}



int main(){
     int arr[]={9,1,7,5,11};
    int arrlength=*(&arr+1)-arr;
    cout<<"array size is "<< arrlength<<endl;

    mergeSorting(arr,0,arrlength);

    for(int i=0;i<arrlength;i++){
        cout<<arr[i]<<" ";
    }

    
  
    

}

