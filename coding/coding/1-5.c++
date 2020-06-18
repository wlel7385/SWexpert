#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

int main(){
    string str;
    cin>>str;
    int i;

    printf("%d", str.size());
    for(i=0;i<str.size();i++){
        if(str[i]>= 'a'&str[i]<='z')
           str[i]=str[i]-32;
    }

   cout<<str<<"\n";

}