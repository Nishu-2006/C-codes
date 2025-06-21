#include<stdio.h>
int main(){
    int arr1[2][3]={{2,4,5},{4,7,8}};
    int arr2[2][3]={{12,3,2},{3,4,12}};
    int arr3[2][3];
    for(int i=0;i<=1;i++){
        for(int j=0;j<=2;j++){
            arr3[i][j]=arr1[i][j]+arr2[i][j];
            printf("%d\t",arr3[i][j]);
        }
        printf("\n");
}
}