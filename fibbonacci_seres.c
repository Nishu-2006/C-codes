#include<stdio.h>
int main(){
    int a,b,c,n;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    printf("enter the value of n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        c=a+b;
        printf("%d\n",c);

    }

}
