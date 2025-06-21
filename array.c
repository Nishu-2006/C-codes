#include<stdio.h>
int main(){
    int a[5],i=0,sum=0;
    while(i<=4){
        printf("Enter %d number :",i+1);
        scanf("%d",a+i);
        i++;
    }
    for(int j=0;j<5;j++){
        sum+=a[j];
    }
    printf("Sum of all the elements: %d\n",sum);
    int avg=sum/5;
    printf("Average of element is: %d\n",avg);
    int max=0;
    for(int j=0;j<5;j++){
        if (max<a[j]){
            max=a[j];
        }}
    printf("Max value of array: %d\n",max);
    int min=a[0];
    for(int j=0;j<5;j++){
        if (min>a[j]){
            min=a[j];
        }}
    printf("Min value of array: %d\n",min);
    


    
    return 0;

    
}