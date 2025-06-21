#include<stdio.h>
int main(){
    int *p,n,i;
    printf("Elements u want to enter");
    scanf("%d",&n);
    p=(int*)malloc(n*4);
    for(i=0;i<=n;i++){
        printf("enter:");
        scanf("%d",p+i);
    }
    for(i=0;i<=9;i++){
        printf("%d",*(p+i));
    }
    
    
    }