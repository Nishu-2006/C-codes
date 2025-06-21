//program to find factorial
#include<stdio.h>
int main(){
    int n,fact=1,i=1;
    printf("Enter a number:");
    scanf("%d",&n);
    do{
        fact*=i;
        i++;
    }while(i<=n);
    printf("%d",fact);
}