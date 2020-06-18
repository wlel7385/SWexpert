#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

int main(){
    string a;
    cin>>a;
    for(int i=0;i<a.length();i++){
    printf("%d ",a[i]-64);
    }
}