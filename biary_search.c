#include<stdio.h>
int binarysearch(int arr[],int size,int n){
    int high=(size-1),low=0,mid;
    while(low<=high){
        mid=(high+low)/2;
        if (arr[mid]==n){
            return mid;}

        else{
            if(arr[mid]<n){
               low=mid+1; }
            else{
                high=mid-1;
            }     
    }
}
return -1;
}
int main(){
    int arr[]={3,5,6,7,12,14};
    int n,a;
    printf("Enter the number which you want to search:");
    scanf("%d",&n);
    a=binarysearch(arr,6,n);
    if (a==-1){
        printf("Element not found");
    }
    else{
        printf("Element found at position %d",a);
    }
    

}