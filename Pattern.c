#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n;");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int ch='A';
        for(int j=(n-i);j>0;j--){
            printf("%c",ch);
            ch+=1;
        }
        for(int j=0;j<i;j++){
            printf(" ");}
        
        
        for(int j=(n-i);j>=0;j--){
            printf("%c",ch);
            ch-=1;
        }
        printf("\n");
    }
    
}