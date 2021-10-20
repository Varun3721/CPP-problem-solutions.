#include<bits/stdc++.h>
using namespace std;


//inverted pattern
// int main(){
//     int n;
//     cin>>n;
//     for(int i=n;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }




//0-1 pattern

// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             if((i+j)%2==0){
//                 cout<<"1"<<" ";
//             }
//             else cout<<"0"<<" ";
//         }
//         cout<<endl;
//     }
// }






//making Rhombus

// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         int space=n-i;
//         for(int j=1;j<=space;j++){
//             cout<<" ";
//         }

//         for(int j=1;j<=n;j++){
//             cout<<"*"<<" ";
//         }
        
//         cout<<endl;
//     }
// }





//Numbers pattern
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//        for(int j=1;j<=n-i;j++){
//            cout<<" ";
//        }

//        for(int k=1;k<=i;k++){
//            cout<<k<<" ";
//        }
//        cout<<endl;

//     }
    
// }



//Palindrome pattern

int main(){
    int n;
    cin>>n;
    int j;
    for(int i=1;i<=n;i++){
        for(s j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(;j>=i;j--){
            cout<<j<<" ";
        }

       

        cout<<endl;

    }
}

