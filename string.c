#include<stdio.h>
#include<string.h>
int main(){
    char a[5]={0};
    printf("Enter character of string:");
    /*for (int i=0;i<5;i++){   
        printf("Enter %d character",i);      //first method
        scanf(" %c",&a[i]);
    }

    for(int i=0;i<5;i++){       //first method
        printf(" %c",a[i]);
    }
    return 0;*/
    //scanf("%s",a);
    //printf("%s",a);
    gets(a);
    puts(a);

    
}