#include<stdio.h>
int main(){
    int arr1[2][3]={{2,4,5},{4,7,8}};
    int arr3[3][2];
    int sum;
    for(int i=0;i<=1;i++){
        for(int j=0;j<=2;j++){
            arr3[j][i]=arr1[i][j];
        }   }
    for(int i=0;i<=2;i++){
        for(int j=0;j<=1;j++){
            printf("%d\t",arr3[i][j]);
        }
        printf("\n");
    }


}