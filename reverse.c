#include<stdio.h>
int main(){
    int n,d,rev=0;
    printf("Enter a number");
    scanf("%d",&n);
    while(n>0){
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    printf("reverse:%d",rev);
    return 0;
    
}