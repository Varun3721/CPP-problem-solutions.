//making the max no. from a numeric string.

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="53214";

//     for(int i=0;i<s.length()-1;i++){
//         for(int j=i+1;j<s.length();j++){
//             if(s[i]<s[j]){
//                 int temp=s[i];
//                 s[i]=s[j];
//                 s[j]=temp;
//             }
//         }

        
      
// }



//Alternative question

sort(s.begin(),s.end(),greater<int>()); //algortim header file.
cout<<s;


}