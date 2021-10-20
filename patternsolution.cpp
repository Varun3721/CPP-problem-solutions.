#include<bits/stdc++.h>
using namespace std;

//lets make a half pyramid after 180 rotation
//         *
//       * *
//     * * *
//   * * * *

// int main(){
//     int rows,cols;

//     cin>>rows >> cols;
//     for(int i=1;i<=rows;i++){
//         for(int j=1;j<=cols;j++){
//             if(i+j>rows){
//                 cout<<"*";
//             }
//             else cout<<" ";
//         }
//         cout<<endl;
//     }
// }











//half pyramids using no.
// int main(){
//     int rows,cols;
//     cin>>rows >>cols;
//     for(int i=1;i<=rows;i++){
//         for(int j=1;j<=cols;j++){
//             if(i>=j){
//                 cout<<i;
//             }
//             else cout<<" ";
//         }
//         cout<<endl;
//     }
// }









//Floyd triangle
// int main(){
//     int n;
//     int num=1;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i>=j){
//                 cout<<num<<" ";
//                 num++;
//             }
//             else cout<<" ";
//         }
//         cout<<endl;
//     }
// }






//butterfly triangle

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }

        int space=2*n-2*i;
        for(int j=1;j<=space;j++){
            cout<<" ";
        }

        for(int j=1;j<=i;j++){
            cout<<"*";
        }

        cout<<endl;
        
    }


   for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }

        int space=2*n-2*i;
        for(int j=1;j<=space;j++){
            cout<<" ";
        }

        for(int j=1;j<=i;j++){
            cout<<"*";
        }

        cout<<endl;
        
    }




}