#include<stdio.h>

int main(){
    int t,b=0;
    int a[10]={};
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        for(int j=1;j<=10;j++){
            scanf("%d",&a[j-1]);
            if(b<a[j-1]){
                b=a[j-1];

            }
        
        }
        printf("#%d %d\n",i+1,b);
        b=0;

    }
}