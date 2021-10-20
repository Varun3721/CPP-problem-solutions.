#include<bits/stdc++.h>
using namespace std;

vector<int> isPower(vector <int> arr){
    vector<int>output;
      for(unsigned int i = 0; i <=arr.size(); i++){

          if(arr[i]>0){
             while(arr[i]%2 == 0){
                 arr[i]=arr[i]/2;
             }
             if(arr[i]==1){
                 output.push_back(1);
             }

         }
        if(arr[i]==0 || arr[i]!=1){

            output.push_back(0);
         }

         }
       
    return output;
     

}

int main(){
    cout<<"enter array size"<<endl;
    int Size;
    cin>>Size;
    vector <int>arr(Size);         //so after getting vector array we have to apply an operation by which only power of 2 gets value assigned 1,else 0;
    cout<<"enter array elements";
    for( int i=1;i<=Size;i++){
        cin>>arr[i];
    }
   


    
    cout<<"the result array will be"<<endl;
    vector<int>result=isPower(arr);

    for(int i=1;i<=arr.size();i++){
        cout<<result[i];
    }
}


//Input =>> [1,3,5,8,12]
//Output should be=>>[1,0,0,1,0]
//its like 2^0=1 & 2^3=8 so gets 1 else 0 got assigned.