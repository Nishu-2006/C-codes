#include<stdio.h>
int main(){
    int arr[2][3],i,j;
    for(i=0;i<=1;i++){
        for(j=0;j<=2;j++){
            printf("Enter number at %d row and %d column:",i,j);
            scanf("%d",(arr[i]+j));
        }
    }
    for(i=0;i<=1;i++){
        for(j=0;j<=2;j++){
            printf("%d\t",*(arr[i]+j));
        }
        printf("\n");
    }
    }