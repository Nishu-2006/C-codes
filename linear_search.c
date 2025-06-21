#include<stdio.h>
int linearsearch(int arr[],int n,int size){
    for(int i=0;i<size;i++){
        if(n==arr[i]){
            return i;  
        }}
    return -1;
    }
int main(){
    int arr[5]={3,5,6,7,3};
    int n,a;
    printf("Enter the value for search:");
    scanf("%d",&n);
    a=linearsearch(arr,n,5);
    if (a==-1){
        printf("element not found");}
    else{
        printf("element found at the position %d",a);}
    
}