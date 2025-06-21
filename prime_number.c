#include<stdio.h>
int main(){
    for(int i=2;i<=50;i++){
        int a=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                a=1;
                break;
            }
        }
        if(a!=1){
            printf("%d\n",i);
        }

    }
    
}