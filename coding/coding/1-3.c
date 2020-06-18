#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a,b,c,d;
    a=n/1000;
    b=(n-(a*1000))/100;
    c=(n-(a*1000+b*100))/10;
    d=(n-(a*1000+b*100+c*10));
    printf("%d",a+b+c+d);
}
