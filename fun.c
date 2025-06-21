#include<stdio.h>
int sum(int a,int b)
{
    int c=a+b;
    return c;
}
int main(){
    int f=32,g=23,s=0;
    s=sum(f,g);
    printf("sum=%d",s);

}