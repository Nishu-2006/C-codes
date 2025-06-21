//program to find factorial
#include<stdio.h>
int main(){
    int n,fact=1,i=1;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n<0){
        printf("undefined");
    }
    else if(n==0){
        printf("1");
    }
    else{
    while(i<=n){
        fact*=i;
        i++;
    }}
    printf("%d",fact);
}