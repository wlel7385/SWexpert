#include<stdio.h>

int main(){
    int t,a,b;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&a,&b);
        if(a>b){
            printf("#%d >\n",i+1);
        }
        if(a<b){
            printf("#%d <\n",i+1);
        }
        else if(a==b)
        {
            printf("#%d =\n",i+1);
        }
        
    }
}