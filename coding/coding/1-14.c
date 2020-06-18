#include<stdio.h>

int main(){
    int n;
    int t;
    int a[204]={0,};
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
       
    }
    for(int i=0;i<n-1;i++){
     for(int j=i+1;j<n;j++){
        if(a[i]>a[j]){
             t=a[j];
            a[j]=a[i];
            a[i]=t;

        }
        }
    }
    printf("%d\n",a[n/2]);
    
}