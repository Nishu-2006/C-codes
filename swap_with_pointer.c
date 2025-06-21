#include<stdio.h>
void swap(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
    printf("\nthe value of a=%d",*a);
    printf("\n the value of b=%d",*b);

}
void main(){
    int a=89,b=7;
    swap(&a,&b);
    printf("\n************In main **************");
    printf("\nthe value of a=%d",a);
    printf("\nthe value of b=%d",b);
}
