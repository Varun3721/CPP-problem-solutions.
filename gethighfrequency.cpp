#include<bits/stdc++.h>
using namespace std;
void checkfrequency(string s,int size){
    int lengther[26]={0};
    for(int i=0;i<size;i++){
        int count=s[i]-'a';
        lengther[count]++;
    }

    int max=-1;
    char ans='a';
    for(int i=0;i<26;i++){
        if(lengther[i]>max){
            max=lengther[i];
            ans=ans+i;
        }
    }
    cout<<max<<endl;
    cout<<ans;
}

int main(){
    string s ="abcadeattttnp";
    checkfrequency(s,s.length());
}