#include<stdio.h>
int main(){
    int arr[]={3,5,6,12,4,67};
    int size=6,t;
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }

        }
    }
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}