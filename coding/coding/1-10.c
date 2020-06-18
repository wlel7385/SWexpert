#include<stdio.h>

int main(){
    int t,a,b;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&a,&b);
        printf("#%d %d %d\n",i+1,a/b,a%b);
    }
    printf("\n");
    

}