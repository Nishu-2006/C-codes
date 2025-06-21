#include<stdio.h>
int main(){
    int arr1[2][3],i,j;
    for(i=0;i<=1;i++){
        for(j=0;j<=2;j++){
            printf("Enter number at %d row and %d column:",i,j);
            scanf("%d",(arr1[i]+j));}}
    int sum=0;
    for(int i=0;i<=1;i++){
        for(int j=0;j<=2;j++){
            sum+=arr1[i][j];
        }   
}
printf("sum = %d", sum);
}