#include<stdio.h>
int main(){
    int a[2][2]={{3,4},{4,7}};
    int b[2][2]={{5,6},{9,10}};
    int c[2][2]={0};
    int r,d;
    for(int i=0; i<2; i++){
        for(int j=0; j<2;j++){
            for(int k=0; k<2; k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d\t",c[i][j]);
        }
    printf("\n");
    }
    

}